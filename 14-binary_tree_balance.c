#include "binary_trees.h"
/**
 * height - Function that returns height
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */
int height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL)
		return (0);
	leftHeight = height(tree->left);
	rightHeight = height(tree->right);
	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	return (rightHeight + 1);
}
/**
 * binary_tree_balance - Function that measures the balance factor
 * @tree: Pointer to the root node of the tree
 * Return: if tree is NULL return 0 or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
