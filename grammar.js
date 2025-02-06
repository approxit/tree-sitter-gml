/**
 * @file Grammar parser for Game Modeling Language (GML)
 * @author Approxit
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: 'gml',

	externals: $ => [$._line_start, $._line_end, $._indent, $._current, $._dedent, $.error],

	extras: $ => [
		'\r',
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
			field('base', alias($.key_text, $.text)),
			optional($._w),
			':',
			optional($._w),
			field('name', $.text),
			$._line_end,
			optional(
				field('body', $.body),
			),
		),

		section: $ => seq(
			field('name', alias($.key_text, $.text)),
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
				// $.table_row,
			),
			repeat(
				choice(
					seq($._current, $.section),
					seq($._current, $.struct_row),
					// seq($._current, $.table_row),
				),
			),
			$._dedent,
		),

		struct_row: $ => seq(
			field('key', alias($.key_text, $.text)),
			optional($._w),
			':',
			optional($._w),
			field('value', $.text),
			$._line_end,
		),

		table_row: $ => seq(
			repeat1(
				seq(
					'|',
					optional($._w),
					alias($.table_text, $.text),
					optional($._w),
				),
			),
			'|',
			$._line_end,
		),

		text: _ => /[^ \t:\n][^\n]*/,
		key_text: $ => /[^ \t:\n][^:\n]*/,
		table_text: _ => /[^|\n]+/,

		_w: _ => /[ \t]+/,
		_line_blank: $ => seq($._line_start, optional($._w), $._line_end),
	},
});
