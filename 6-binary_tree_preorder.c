#include "binary_trees.h"
/**
 * binary_tree_preorder - Uses a pre-order traversal
 * @tree: Pointer to tree
 * @func: Pointer to function
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
