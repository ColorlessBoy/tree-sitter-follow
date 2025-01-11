/**
 * @file Follow is a dependent type language for formal proof.
 * @author Peng Lingwei
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'lean4_lambda_calculator',

  extras: $ => [
    /\s/,               // Ignore whitespace
    $.comment           // Include comments
  ],

  rules: {
    start: $ => repeat($.command), // Support multiple commands

    // Top-level constructs
    command: $ => choice(
      $.definition,
      $.theorem,
      $.expr
    ),

    // Definitions (with various syntaxes)
    definition: $ => choice(
      seq('def', $.identifier, ':', $.expr),
      seq('def', $.identifier, ':=', $.expr),
      seq('def', $.identifier, ':', $.expr, ':=', $.expr)
    ),

    // Theorem syntax
    theorem: $ => seq('thm', $.identifier, ':', $.expr),

    // General expressions
    expr: $ => choice(
      $.primary,
      $.app,
      $.lambda,
      $.forall
    ),

    primary: $ => choice(
      $.sort,
      $.const,
      $.bound_var
    ),

    // Application (left-associative)
    app: $ => prec.left(seq($.expr, $.expr)),

    // Lambda expression (right-associative)
    lambda: $ => prec.right(seq($.lambda_arg, '=>', $.expr)),
    lambda_arg: $ => seq('(', $.const, ':', $.expr, ')'),

    // Forall expression (right-associative)
    forall: $ => prec.right(seq($.forall_arg, '->', $.expr)),
    forall_arg: $ => seq('(', $.const, ':', $.expr, ')'),

    // Sorts
    sort: $ => seq('Sort', '(', $.level, ')'),

    // Constants and bound variables
    const: $ => $.identifier,
    bound_var: $ => seq('#', /\d+/),

    // Level expressions
    level: $ => choice(
      seq($.level, '+', '1'),
      /\d+/,
      $.identifier,
      seq('Max', '(', $.level, ',', $.level, ')'),
      seq('IMax', '(', $.level, ',', $.level, ')')
    ),

    // Identifiers
    identifier: $ => /[\w_\.']+/,

    // Comments
    comment: $ => choice(
      seq('--', /.*/),                               // Single-line comment
      seq('/-', /[^]*?/, '-/')                      // Block comment
    )
  }
});