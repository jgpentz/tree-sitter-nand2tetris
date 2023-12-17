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
```

Start `nvim` then install the parsers with `:TSInstall hackasm` and `:TSInstall hackhdl`.

### Adding syntax highlighting

[Queries](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#queries)
are what Treesitter uses to extract information from the syntax tree,
and then add appropriate syntax highlighting. The most important query is called the highlights
query.  The highlights query uses captures to assign arbitrary highlight names to different nodes in the tree.
Each highlight name can then be mapped to a color.

The highlights files specifying the captures for the hackasm/hackhdl language are
located in  `tree-sitter-nand2tetris/tree-sitter-hackasm` and `tree-sitter-nand2tetris/tree-sitter-hackhdl` respectively.

1. In your neovim config direcotory (e.g. `~/.config/nvim`) create two new directories in the `~/.config/nvim/after/queries` direcotory.
Name these directories `hackhdl` and `hackasm`.  
2. In each of those directories, copy the respective `highlights.scm` file from
the `tree-sitter-nand2tetris/tree-sitter-hackasm/queries/highlights.scm` and `tree-sitter-nand2tetris/tree-sitter-hackasm/queries/highlights.scm`.

## ☠️  Postmortem ☠️


