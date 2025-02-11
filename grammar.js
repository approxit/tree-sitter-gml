/**
 * @file Grammar parser for Game Modeling Language (GML)
 * @author Approxit
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const RE_WS = ' \\t';
const RE_RESERVED = ':=|#"\\[\\]\\t\\n';

module.exports = grammar({
	name: 'gml',

	externals: $ => [
		$._line_end,
		$._indent,
		$._continue,
		$._dedent,
		$.identifier,
		$.text_start,
		$.text_fragment,
		$.string,
		$.comment,
		$.error,
	],

	extras: $ => [
		/[\r]/,
		$.comment,
	],

	rules: {
		source_file: $ => repeat(
			choice(
				$.object,
				$._line_end,
			),
		),

		object: $ => seq(
			field('base', $.identifier),
			optional($._ws),
			':',
			optional($._ws),
			field('name', $.identifier),
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
				$._line_end,
			),
			repeat(
				seq($._continue, choice(
					$.object,
					$.section,
					$.struct_row,
					$.table_row,
					$._line_end,
				)),
			),
			$._dedent,
		),

		struct_row: $ => seq(
			field('key', $.identifier),
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

		text: $ => choice(
			seq(alias($.identifier, $.text_fragment)),
			seq(
				choice(
					alias($.text_start, $.text_fragment),
					$.string,
				),
				repeat(
					choice(
						$.text_fragment,
						$.string,
					),
				),
			),
		),

		_ws: _ => new RegExp(`[${RE_WS}]+`),
	},
});
