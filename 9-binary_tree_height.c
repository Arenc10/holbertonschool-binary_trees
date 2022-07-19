#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a tree
 * @tree: Tree pointer to the root node
 * Return: If NULL return 0 else the height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	return (rightHeight + 1);
}
