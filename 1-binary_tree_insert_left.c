#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * @parent: Pointer
 * @value: Value
 *
 * Return: Pointer or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
		return (NULL);

	tree = binary_tree_node(parent, value);
	if (tree == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		tree->left = parent->left;
		parent->left->parent = tree;
	}
	parent->left = tree;

	return (tree);

}
