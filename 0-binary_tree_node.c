#include "binary_trees.h"

/**
*binary_tree_node - creates a binary tree node
*
*@parent: node to be created
*
*@value: value of the node
*
*Return: new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

if (!newNode)
{
	return (NULL);
}

else
{

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	}

return (newNode);

}
