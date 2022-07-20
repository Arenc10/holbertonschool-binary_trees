#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts nodes with at least 1 child
 * @tree: tree pointer to the root node fo the tree
 * Return: Number of nodes with a child or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (binary_tree_nodes(tree->left)
			+ 1 + binary_tree_nodes(tree->right));
}
