#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Responsible for checking if a node is a leaf.
 *
 * @node: A pointer to the node to be checked.
 *
 * Return: 1 if node is a leaf, else return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
