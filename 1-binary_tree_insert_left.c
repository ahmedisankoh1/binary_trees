#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of a parent node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to assign to the new node.
 *
 * Return: new_node on SUCCESS and  NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
