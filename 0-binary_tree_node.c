#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree
 * @parent: Pointer
 * @value: Value
 *
 * Return: Pointer or NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
		return (NULL);

	tree->n = value;
	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;

	return (tree);
}
