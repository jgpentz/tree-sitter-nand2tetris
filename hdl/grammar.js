module.exports = grammar({
    name: 'hackhdl',

    extras: $ => [
        /\s|\r?\n/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._definition),
        
        _definition: $ => choice(
            $.chip_definition,
        ),

        chip_definition: $ => seq(
            'CHIP',
            $.identifier,
            $.block
        ),

        block: $ => seq(
            '{',
            optional($.inputs),
            optional($.outputs),
            $.parts,
            '}'
        ),

        inputs: $ => seq(
            'IN',
            commaSep($.parameter),
            ';'
        ),

        outputs: $ => seq(
            'OUT',
            commaSep($.parameter),
            ';'
        ),

        parts: $ => seq(
            'PARTS',
            ':',
            repeat(
                $.part
            )
        ),

        part: $ => seq(
            $.identifier,
            '(',
            commaSep($.expression),
            ')',
            ';'
        ),

        keyword: $ => choice(
            'IN',
            'OUT',
            'PARTS'
        ),

        bool: $ => choice(
            'true',
            'false'
        ),

        parameter: $ => seq(
            $.identifier,
            optional(choice($.bus_index, $.bus_slicing))
        ),

        expression: $ => seq(
            $.parameter,
            '=',
            $.identifier
        ),

        identifier: $ => /[\w_-]+/,
        number: $ => /\d+/,
        bus_index: $ => /\[([\d]+)\]/,
        bus_slicing: $ => /\[([\d]+\.{2}[\d]+)\]/,
  
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

function commaSep(rule) {
    return seq(rule, optional(repeat(seq(',', rule))))
}
