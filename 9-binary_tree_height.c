#include "binary_trees.h"


size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t height_left, height_right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left <  height_right)
	{
		return (1 +( height_right));
	}

	else
	{
		return (1 +( height_left));
	}

}
