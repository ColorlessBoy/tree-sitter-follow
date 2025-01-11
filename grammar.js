/**
 * @file Follow is a dependent type language for formal proof.
 * @author Peng Lingwei
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'follow',

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
      $.proofstep,
      $.action,
      $.search
    ),

    // Definitions (with various syntaxes)
    definition: $ => choice(
      seq($.def_key, $.identifier, ':', $.expr),
      seq($.def_key, $.identifier, ':=', $.expr),
      seq($.def_key, $.identifier, ':', $.expr, ':=', $.expr)
    ),

    // Theorem syntax
    theorem: $ => seq($.thm_key, $.identifier, ':', $.expr),

    // Proof step
    proofstep: $ => seq($.ps_key, $.expr),

    // Action 
    action: $ => seq($.action, $.expr),
    
    // Search
    search: $ => seq($.search, $.identifier),

    // General expressions
    expr: $ => choice(
      $.primary,
      $.app,
      $.lambda,
      $.forall,
      seq("(", $.expr, ")")
    ),

    primary: $ => choice(
      $.sort,
      $.const,
      $.bound_var
    ),

    // Application (left-associative)
    app: $ => prec.left(3, seq($.expr, $.expr)),

    // Lambda expression (right-associative)
    lambda: $ => prec.right(2, seq($.lambda_arg, '=>', $.expr)),
    lambda_arg: $ => choice(
      prec(1, seq('(', $.const, ':', $.expr, ')')), // 提升优先级
      $.expr
    ),

    // Forall expression (right-associative)
    forall: $ => prec.right(1, seq($.forall_arg, '->', $.expr)),
    forall_arg: $ => choice(
      prec(1, seq('(', $.const, ':', $.expr, ')')), // 提升优先级
      $.expr
    ),

    // Sorts
    sort: $ => prec(100, seq('Sort', '(', $.level, ')')),

    // Constants and bound variables
    const: $ => $.identifier,
    bound_var: $ => prec(100, seq('#', /\d+/)),

    // Level expressions
    level: $ => choice(
      seq($.level, '+', '1'),
      /\d+/,
      $.identifier,
      seq('Max', '(', $.level, ',', $.level, ')'),
      seq('IMax', '(', $.level, ',', $.level, ')')
    ),

    // Identifiers
    identifier: $ => token(/[\w_\.']+/),

    // keyword 
    def_key: $ => token(prec(2, "def")),
    thm_key: $ => token(prec(2, "thm")),
    ps_key: $ => token(prec(2, "ps")),
    action_key: $ => token(prec(2, "action")),
    search_key: $ => token(prec(2, "search")),

    // Comments
    comment: $ => choice(
      seq('--', /.*/),                               // Single-line comment
      seq('/-', /[^-]*(-[^/][^-]*)*?-\//),             // Block comment
    )
  }
});