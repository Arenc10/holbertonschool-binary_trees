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
 * binary_tree_balance - Function measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the number of balance, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if binary tree is perfect, otherwise 0
 * 0 is tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	return (0);
}
