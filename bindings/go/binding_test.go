package tree_sitter_gml_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gml "github.com/tree-sitter/tree-sitter-gml/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gml.Language())
	if language == nil {
		t.Errorf("Error loading Gml grammar")
	}
}
