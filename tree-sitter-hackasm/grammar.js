module.exports = grammar({
    name: 'hackasm',

    extras: $ => [
        /\s|\r?\n/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._definition),
        
        _definition: $ => choice(
            $.label,
            $.c_instruction
        ),

        label: $ => choice(
            seq(
                '(',
                field('label_name', $.identifier),
                ')',
            ),
            seq(
                '@',
                choice(
                    field('label_name', $.identifier),
                    $.number,
                    $.builtin_symbols
                )
            )
        ),

        c_instruction: $ => prec.left(seq(
            optional(seq(
                $.builtin_regs,
                '=',
            )),
            $._expression,
            optional($.jump_expression),
        )),

        _expression: $ => choice(
            $.builtin_regs,
            $.number,
            $.unary_expression,
            $.binary_expression
        ),

        unary_expression: $ => prec(2, choice(
            seq('-', $._expression),
            seq('!', $._expression)
        )),

        binary_expression: $ => choice(
            prec.left(6, seq($._expression, '+', $._expression)),
            prec.left(5, seq($._expression, '-', $._expression)),
            prec.left(4, seq($._expression, '&', $._expression)),
            prec.left(3, seq($._expression, '|', $._expression)),
        ),

        jump_expression: $ => seq(
            ';',
            $.conditionals
        ),

        builtin_regs: $ => choice(
            'null',
            'M',
            'D',
            'A',
            'MD',
            'AM',
            'AD',
            'AMD'
        ),

        conditionals: $ => choice(
            'JGT',
            'JLE',
            'JEQ',
            'JLT',
            'JNE',
            'JMP',
            'JGE'
        ),

        builtin_symbols: $ => choice(
            'R0',
            'R1',
            'R2',
            'R3',
            'R4',
            'R5',
            'R6',
            'R7',
            'R8',
            'R9',
            'R10',
            'R11',
            'R12',
            'R13',
            'R14',
            'R15',
            'SP',
            'LCL',
            'ARG',
            'THIS',
            'THAT',
            'SCREEN',
            'KBD'
        ),

        identifier: $ => /[\w_-]+/,
        number: $ => /-?\d+/,
        operator: $ => /(?:\+|-|&|\|)?/,

        // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
        comment: _ => token(choice(
            seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/',
            ),
        )),
  }
});
