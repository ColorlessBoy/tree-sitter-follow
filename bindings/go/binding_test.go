package tree_sitter_follow_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_follow "github.com/tree-sitter/tree-sitter-follow/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_follow.Language())
	if language == nil {
		t.Errorf("Error loading Follow grammar")
	}
}
