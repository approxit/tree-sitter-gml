/**
 * @file Grammar parser for Game Modeling Language (GML)
 * @author Approxit
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: 'gml',

	externals: $ => [$._newline, $._indent, $._dedent, $._error],

	extras: $ => [
		/\s+/,
	],

	conflicts: $ => [
		[$.struct_definition, $.section_definition],
	],

	rules: {
		source_file: $ => repeat1(
			$.model_definition,
		),

		model_definition: $ => seq(
			field('base', alias($.model_text, $.text)),
			':',
			field('name', $.text),
			$._newline,
			optional(
				field('body', alias($.model_body, $.body)),
			),
		),

		model_body: $ => seq(
			$._indent,
			repeat1($.section_definition),
			$._dedent,
		),

		body: $ => seq(
			$._indent,
			repeat1(
				choice(
					$.struct_definition,
					$.section_definition,
				),
			),
			$._dedent,
		),

		section_definition: $ => seq(
			field('name', $.text),
			$._newline,
			optional(
				field('body', $.body),
			),
		),

		struct_definition: $ => seq(
			field('name', $.text),
			$._newline,
			optional(
				field('body', alias($.struct_body, $.body)),
			),
		),

		struct_body: $ => seq(
			$._indent,
			repeat1($.struct_row),
			$._dedent,
		),

		struct_row: $ => seq(
			field('key', alias($.struc_text, $.text)),
			':',
			field('value', $.text),
			$._newline,
		),

		table_definition: $ => seq(
			repeat1(
				$.table_row,
			),
		),

		table_row: $ => seq(
			repeat1(
				seq(
					'|',
					alias($.table_text, $.text),
				),
			),
			'|',
			$._newline,
		),

		text: _ => /[^\n]+/,
		model_text: _ => /[^:\n]+/,
		table_text: _ => /[^|\n]+/,
		struc_text: _ => /[a-zA-Z_][a-zA-Z0-9_]+/,
	},
});
