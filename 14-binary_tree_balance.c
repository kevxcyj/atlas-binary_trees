#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor
 * @tree: Pointer to tree
 *
 * Return: Balance factor or 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of node
 * @tree: Pointer to tree
 *
 * Return: Height of node or 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lf = 0;
		size_t rt = 0;

		lf = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lf > rt) ? lf : rt);
	}
	return (0);
}
