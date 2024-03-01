#include "binary_trees.h"

/**
 * binary_tree_is_root - Responsible for checking if a node is a root.
 *
 * @node: A pointer to the node to be checked.
 *
 * Return: 1 if node is a root, else 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
