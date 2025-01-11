/**
 * @file Follow is a dependent type language for formal proof.
 * @author Peng Lingwei <penglingwei@zju.edu.cn>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'lean4_lambda_calculator',

  extras: $ => [
    /\s/ // Ignore whitespace
  ],

  rules: {
    start: $ => choice(
      $.definition,
      $.theorem,
      $.expr
    ),

    definition: $ => choice(
      seq('def', $.identifier, ':', $.expr),
      seq('def', $.identifier, ':=', $.expr),
      seq('def', $.identifier, ':', $.expr, ':=', $.expr)
    ),

    theorem: $ => seq('thm', $.identifier, ':', $.expr),

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

    app: $ => prec.left(seq($.expr, $.expr)),

    lambda: $ => prec.right(seq($.lambda_arg, '=>', $.expr)),
    lambda_arg: $ => seq('(', $.const, ':', $.expr, ')'),

    forall: $ => prec.right(seq($.forall_arg, '->', $.expr)),
    forall_arg: $ => seq('(', $.const, ':', $.expr, ')'),

    sort: $ => seq('Sort', '(', $.level, ')'),
    const: $ => $.identifier,
    bound_var: $ => seq('#', /\d+/),

    level: $ => choice(
      seq($.level, '+', '1'),
      /\d+/,
      $.identifier,
      seq('Max', '(', $.level, ',', $.level, ')'),
      seq('IMax', '(', $.level, ',', $.level, ')')
    ),

    identifier: $ => /[\w_\.']+/,
  }
});