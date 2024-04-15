#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of node
 * @tree: Pointer to tree
 *
 * Return: Depth of node or 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
