#include "binary_trees.h"
/**
 * binary_tree_is_root - Function that checks if a given node is a root
 * @node: pointer to the node check
 * Return: 1 if is root or 0 if it is not root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
