#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 * 1 child
 * @tree: pointer to the root node of the tree to count
 * its number of nodes
 * Return: (size_t) number of nodes or 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			return ((binary_tree_nodes(tree->left)) +
			(binary_tree_nodes(tree->right)) + 1);
	}
	return (0);
}
