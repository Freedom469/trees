#include "binary_trees.h"

/**
*binary_tree_preorder - traverses the tree
*@tree: pointer to the tree node
*@func: function called on easch node
*/


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;

	}
	else
	{
		func(tree->n);

		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

}
