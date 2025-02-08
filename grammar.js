/**
 * @file Grammar parser for Game Modeling Language (GML)
 * @author Approxit
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const RE_WS = ' \\t';
const RE_RESERVED = ':=|#\\t\\n';

module.exports = grammar({
	name: 'gml',

	externals: $ => [$._line_start, $._line_end, $._indent, $._continue, $._dedent, $.error],

	extras: $ => [
		/[\r]/,
	],

	rules: {
		source_file: $ => repeat(
			choice(
				seq($._line_start, $.object),
				$._line_blank,
			),
		),

		object: $ => seq(
			field('base', $.text),
			optional($._ws),
			':',
			optional($._ws),
			field('name', $.text),
			$._line_end,
			optional(
				field('body', $.body),
			),
		),

		section: $ => seq(
			field('name', $.text),
			$._line_end,
			optional(
				field('body', $.body),
			),
		),

		body: $ => seq(
			$._indent,
			choice(
				$.object,
				$.section,
				$.struct_row,
				$.table_row,
			),
			repeat(
				seq($._continue, choice(
					$.object,
					$.section,
					$.struct_row,
					$.table_row,
				)),
			),
			$._dedent,
		),

		struct_row: $ => seq(
			field('key', $.text),
			optional($._ws),
			'=',
			optional($._ws),
			field('value', $.text),
			$._line_end,
		),

		table_row: $ => seq(
			repeat1(
				seq(
					'|',
					optional($._ws),
					$.text,
					optional($._ws),
				),
			),
			'|',
			$._line_end,
		),

		text: $ => new RegExp(`[^${RE_WS}${RE_RESERVED}]+([${RE_WS}]+[^${RE_WS}${RE_RESERVED}]+)*`),

		_ws: _ => new RegExp(`[${RE_WS}]+`),
		_line_blank: $ => seq($._line_start, $._line_end),
	},
});
