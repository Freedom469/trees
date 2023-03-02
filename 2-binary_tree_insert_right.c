#include "binary_trees.h"

/**
*binary_tree_insert_right -  a function that inserts a node as
*the right-child of another node
*
*@parent: a pointer to the node to insert the right-child in
*
*@value: The value to store in the new node
*
*Return:  pointer to the created node
*
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (parent == NULL)
	{
		return (NULL);

	}

	if (parent->right == NULL)
	{
		binary_tree_node(parent, value);
	}

	else
	{
		temp = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = temp;
		temp->parent = parent->right;
	}

	return (parent->right);

}
