#include <binary_trees.h>
/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * @parent: Pointer
 * @value: Value
 * 
 * Return: Pointer or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
		return (NULL);

	tree = binary_tree_node(parent, value);
	if (tree == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		tree->right = parent->right;
		parent->right->parent = tree;
	}
	parent->right = tree;

	return (tree);
}
