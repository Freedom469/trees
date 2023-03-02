#include "binary_trees.h"
/**
*binary_tree_insert_left - insert a node to the left of a parent
*
*@parent: the node to insert.
*
*@value: the value to insert.
*
*Return: the address of the inserted node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *temp = NULL;


	if (parent == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{

		parent->left = binary_tree_node(parent, value);
	}

	else
	{
		temp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = temp;
		temp->parent = parent->left;
	}

	return (parent->left);

}


