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
