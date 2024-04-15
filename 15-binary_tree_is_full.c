#include "binary_trees.h"
/**
 * binary_tree_recursive - Checks if tree is recursive
 * @tree: Pointer to tree
 *
 * Return: 0 or 1
*/
int binary_tree_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    binary_tree_recursive(tree->left) == 0 ||
		    binary_tree_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}




/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: Pointer to tree
 *
 * Return: 0 or 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_recursive(tree));
}
