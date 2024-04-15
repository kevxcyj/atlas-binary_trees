#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in binary tree
 * @tree: Pointer to tree
 *
 * Return: # of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree)
	{
		l += (!tree->left && !tree->right) ? 1 : 0;
		l += binary_tree_leaves(tree->left);
		l += binary_tree_leaves(tree->right);
	}
	return (l);
}
