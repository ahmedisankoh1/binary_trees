#include "binary_trees.h"

/**
 * binary_tree_insert_right -Inserts a node as the right-child of a parent node
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to assign to the new node.
 *
 * Return: new_node on SUCCESS and  NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
