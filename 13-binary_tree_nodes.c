#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with 1 child
 * @tree: Pointer to tree
 *
 * Return: Nodes or 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t t = 0;

	if (tree)
	{
		t += (tree->left || tree->right) ? 1 : 0;
		t += binary_tree_nodes(tree->left);
		t += binary_tree_nodes(tree->right);
	}
	return (t);
}
