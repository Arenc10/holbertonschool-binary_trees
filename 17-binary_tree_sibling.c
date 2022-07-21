#include "binary_trees.h"
/**
 * binary_tree_sibling - Checks the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: poiner to the sibling of a node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node && node->parent->left != NULL)
		return (node->parent->left);
	if (node->parent->right != node && node->parent->right != NULL)
		return (node->parent->right);
	return (NULL);
}
