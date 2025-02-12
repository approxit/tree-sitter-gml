# tree-sitter-gml

`tree-sitter-gml` is a Game Modeling Language (GML) grammar for [tree-sitter](https://tree-sitter.github.io/tree-sitter/), an incremental parsing system for programming tools.

## Features

- Incremental parsing of GML
- Python bindings
- MIT licensed

## Installation

### Python

Install via pip:

```sh
pip install tree-sitter-gml
```

## Usage

### Python

```python
import tree_sitter_gml

# Example usage
```

## Development

### Generating grammar

To generate the grammar, run:

```sh
tree-sitter generate
```

### Testing

To run all tests, use:

```sh
tree-sitter test
```

or

```sh
tree-sitter test --overview-only
```

### Parsing

To parse a file, use:

```sh
tree-sitter parse -rd0 path/to/file.gml
```

or run test number 31, use:

```sh
tree-sitter parse -d -n 31
```

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Contributing

Contributions are welcome! Please open an issue or submit a pull request on GitHub.

## Authors

- Approxit

## Links

- [Homepage](https://github.com/tree-sitter/tree-sitter-gml)
