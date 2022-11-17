#include "binary_trees.h"

/**
 * binary_tree_sibling - locates the sibling of a node
 * @node: pointer to the node to locate its sibling
 * Return: pointer to the sibling node otherwise NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
