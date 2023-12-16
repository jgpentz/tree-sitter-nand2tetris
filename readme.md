# 🎄 Tree-sitter Parsers for Nand2Tetris 🎄

The goal of this project is to use the
[tree-sitter](https://github.com/tree-sitter/tree-sitter) parse generator
tool to provide syntax highlighting for the .hdl and .asm files used in the 
[Nand2tetris](https://www.nand2tetris.org/) MOOC.  Tree-sitter generates a 
parser based on a grammar, and in my case I used the parser
with the [Neovim](https://neovim.io/) tree-sitter plugin.

## Installation

A lot of this section will be copy+paste from the (Neovim tree-sitter github page)[https://github.com/jgpentz/tree-sitter-nand2tetris.git]

### Generating the parse file


1. Clone the repository in, say, `~/projects`. Make sure that the `tree-sitter-cli` executable is installed and in your path; see <https://tree-sitter.github.io/tree-sitter/creating-parsers#installation> for installation instructions.
2. Run `tree-sitter generate` in both the tree-sitter-hackasm or tree-sitter-hackhdl directories (followed by `tree-sitter test` for good measure).

### Adding the parser


## ☠️  Postmortem ☠️
