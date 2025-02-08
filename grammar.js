/**
 * @file Grammar parser for Game Modeling Language (GML)
 * @author Approxit
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const RE_WS = ' \\t';
const RE_RESERVED = ':|#\\t\\n';

module.exports = grammar({
	name: 'gml',

	externals: $ => [$._line_start, $._line_end, $._indent, $._continue, $._dedent, $.error],

	extras: $ => [
		new RegExp(`[${RE_WS}\r]`),
		$._comment,
	],

	rules: {
		source_file: $ => repeat(
			choice(
				$.model,
				$._line_blank,
			),
		),

		model: $ => seq(
			$._line_start,
			field('base', alias($.text_immediate, $.text)),
			':',
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
				$.section,
				$.struct_row,
				$.table_row,
			),
			repeat(
				seq($._continue, choice(
					$.section,
					$.struct_row,
					$.table_row,
				)),
			),
			$._dedent,
		),

		struct_row: $ => seq(
			field('key', $.text),
			':',
			field('value', $.text),
			$._line_end,
		),

		table_row: $ => seq(
			repeat1(
				seq(
					'|',
					alias($.text_or_empty, $.text),
				),
			),
			'|',
			$._line_end,
		),

		_comment: _ => token(seq('#', /.*/)),

		text: $ => new RegExp(`[^${RE_RESERVED}]+`),
		text_or_empty: _ => new RegExp(`[^${RE_RESERVED}]*`),
		text_immediate: $ => new RegExp(`[^${RE_WS}${RE_RESERVED}][^${RE_RESERVED}]*`),

		_ws: _ => new RegExp(`[${RE_WS}]+`),
		_line_blank: $ => seq($._line_start, optional($._ws), $._line_end),
	},
});
