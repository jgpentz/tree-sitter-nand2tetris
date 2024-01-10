# 🎄 Tree-sitter Parsers for Nand2Tetris 🎄

The goal of this project is to use the
[tree-sitter](https://github.com/tree-sitter/tree-sitter) parse generator
tool to provide syntax highlighting for the .hdl and .asm files used in the 
[Nand2tetris](https://www.nand2tetris.org/) MOOC.  Tree-sitter generates a 
parser based on a grammar, and in my case I used the parser
with the [Neovim](https://neovim.io/) tree-sitter plugin.

## Installation

A lot of this section will be copy+paste from the [Neovim tree-sitter github page](https://github.com/nvim-treesitter/nvim-treesitter).

### Generating the parse file


1. Clone the repository in, say, `~/projects`. Make sure that the `tree-sitter-cli` executable is installed and in your path; see <https://tree-sitter.github.io/tree-sitter/creating-parsers#installation> for installation instructions.
2. Run `tree-sitter generate` in both the tree-sitter-hackasm and tree-sitter-hackhdl directories (followed by `tree-sitter test` for good measure).

### Adding the parsers

Open up your `init.lua` file (or other plugin file e.g. `after/plugin/tree-sitter.lua`) and add the following snippet:

```lua
-- Configuration for the hack hdl (nand2tetris) parser
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.hackhdl= {
  install_info = {
    url = "~/Code/tree-sitter-nand2tetris/tree-sitter-hackhdl", -- local path or git repo
    files = {"src/parser.c"}, -- note that some parsers also require src/scanner.c or src/scanner.cc
    -- optional entries:
    branch = "main", -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = true, -- if folder contains pre-generated src/parser.c
  },
  filetype = "hdl", -- if filetype does not match the parser name
}

vim.filetype.add({
    extension = {
        hdl = 'hackhdl',
    }
})

-- Configuration for the hack asm (nand2tetris) parser
parser_config.hackasm = {
  install_info = {
    url = "~/Code/tree-sitter-nand2tetris/tree-sitter-hackasm", -- local path or git repo
    files = {"src/parser.c"}, -- note that some parsers also require src/scanner.c or src/scanner.cc
    -- optional entries:
    branch = "main", -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = true, -- if folder contains pre-generated src/parser.c
  },
  filetype = "asm", -- if filetype does not match the parser name
}

vim.filetype.add({
    extension = {
        hdl = 'hackasm',
    }
})
```

Start `nvim` then install the parsers with `:TSInstall hackasm` and `:TSInstall hackhdl`.

### Adding syntax highlighting

[Queries](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#queries)
are what Treesitter uses to extract information from the syntax tree,
and then add appropriate syntax highlighting. The most important query is called the highlights
query.  The highlights query uses captures to assign arbitrary highlight names to different nodes in the tree.
Each highlight name can then be mapped to a color.

The highlights files specifying the captures for the hackasm/hackhdl language are
located in  `tree-sitter-nand2tetris/tree-sitter-hackasm/queries` and `tree-sitter-nand2tetris/tree-sitter-hackhdl/queries` respectively.

1. In your neovim config direcotory (e.g. `~/.config/nvim`) create two new directories in the `~/.config/nvim/after/queries` direcotory.
Name these directories `hackhdl` and `hackasm`.  
2. In each of those directories, copy the respective `highlights.scm` file from
the `tree-sitter-nand2tetris/tree-sitter-hackasm/queries/highlights.scm` and `tree-sitter-nand2tetris/tree-sitter-hackasm/queries/highlights.scm`.

## ☠️  Postmortem ☠️

Digging into parsing, parse generators, and syntax highlighting gave me a lot of new insights and respect for everything involved in the process.
In this section I would like to share some of that information, and hopefully I can look back on this as a reference.

### Parsing

The term [parsing](https://en.wikipedia.org/wiki/Parsing) has a long history and interesting crossovers in linguistics and computer science.
In linguistics, parsing is often used as a method of understanding the exact meaning of a sentence,
conforming to the rules of a formal grammar. In computer science, the term is used to describe the analysis
of a sentence or string of words into it's constituents, resulting in a parse tree that  shows their
relationship to each other.¹

The following snippet from [Cornell](https://www.cs.cornell.edu/courses/cs2112/2018fa/lectures/lecture.html?id=parsing)
does a much better job of explaining things that I would be able to.²

Our brains are remarkably good at parsing. When we hear a sentence like “The rat ate cheese,” 
our brains build a **parse tree** similar to the following diagram:

![simple sentence tree](.assets/simple-sentence.png)

Notice that the leaves of the tree, in left-to-right order, spell out the sentence, but there are also some other nodes higher up in the tree describing the function of each words and of subsequences of words.

Your brain can handle much more complex sentences, though it does have its limits. On the other hand, when you read a supposed sentence like “rat cheese the ate the,” you instantly recognize this as not being a sentence at all, because it has no parse tree. This sequence of words is, in fact, a **syntax error**.

Parsing is performed by computers as well. Your Java programs are parsed by the Java compiler. Even more mundane devices such as calculators use parsing to interpret mathematical expressions.

For programming languages, legal syntax is defined by a **grammar**, which specifies which input sequences have a parse tree. While the situation in real human languages is more complex, for programming languages, legal syntax is defined using a **context-free grammar**. The modifier **context-free** means that the legal syntax for a subtree of the parse tree (say, the possible subtrees of a “noun phrase” node, above) depends only on the node at the root of the subtree and not on the rest of the tree.

The grammar is defined in terms of **terminal symbols** (also called **tokens**) and **nonterminal symbols**. The terminal symbols can appear as part of the input (e.g., “rat”) and appear in the parse tree only at its leaves. The nonterminal symbols (e.g., “noun phrase”) appear at all other nodes in the tree. There is usually a low-level preprocessing step called tokenization that reads a stream of raw input symbols and organizes them into a sequence of tokens to be presented to the parser. For example, when parsing the arithmetic expression (42 + foo) * 2112, a tokenizer might break the input up into a sequence of tokens (, 42, +, foo, ), *, and 2112.

### Parse generators

Now that we have a basic understanding of what it means for a parser to parse a file,
it begs the question: how do we generate a parser?

This is done through a parse generator, such as [Tree-sitter](https://tree-sitter.github.io/tree-sitter/).
The parse generator takes a grammar as input, and generates source code that can parse streams of 
characters according to the grammar rules.

Grammar ----> | Parse generator | ----> Parser

The generated code is a parser, which can now perform the above mentioned task of
converting a linear structure (string of symbols) into a hierarchical structure (derivation tree).


### Abstract vs. concrete syntax trees

A programming language, when parsed, is often represented in many forms, two of which
are the [concrete syntax tree](https://en.wikipedia.org/wiki/Parse_tree)  and the 
[abstract syntax tree](https://en.wikipedia.org/wiki/Abstract_syntax_tree).  The concrete syntax tree
is a one-to-one mapping from the grammar to a tree-form.  It's a very formal expression
and often not a very useful representation to work with because it contains many nodes
that aren't useful for processing. This is where the abstract syntax tree comes in.

Abstract syntax trees are simplified representations of the source code, and often expressed
throu

Abstract syntax trees  are simplified syntactic representations of the source code, 
and they're most often expressed by the data structures of the language used for implementation.

Abstract syntax trees, or simply syntax trees, differ from parse trees because superficial 
distinctions of form, unimportant for translation, do not appear in syntax trees.

ASTs don't show the whole syntactic clutter, but represent the parsed string in a i
structured way, discarding all information that may be important for parsing the 
string, but isn't needed for analyzing it.³

For more information, visit the follow [blog post](https://eli.thegreenplace.net/2009/02/16/abstract-vs-concrete-syntax-trees/).

### Syntax highlighting

In order to apply syntax highlighting to a file, Tree-sitter takes the syntax tree
and matches the symbols in the tree to patters defined in a file.  It extracts this information
using a query.  The matched patterns often define captures, which allow you to associate names
with a specific node in a pattern.  Editor color themes define which colors should be associated
with commonly defined capture names.  Some common capture names are (`@number @function @string`).

See the following [Neovim document section](https://neovim.io/doc/user/treesitter.html#treesitter-query)
for more information.

### References

[1]https://en.wikipedia.org/wiki/Parsing

[2]https://www.cs.cornell.edu/courses/cs2112/2018fa/lectures/lecture.html?id=parsing

[3]https://eli.thegreenplace.net/2009/02/16/abstract-vs-concrete-syntax-trees/

[4]https://neovim.io/doc/user/treesitter.html#treesitter-query
