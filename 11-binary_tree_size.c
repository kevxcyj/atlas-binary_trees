#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of binary tree
 * @tree: Pointer to tree
 *
 * Return: Size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t = 0;

	if (tree)
	{
		t += 1;
		t += binary_tree_size(tree->left);
		t += binary_tree_size(tree->right);
	}
	return (t);
}
