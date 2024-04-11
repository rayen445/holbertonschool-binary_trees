#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The value in the node
 *        must be passed as a parameter to this function.
 *
 * Description: In-order traversal starts from the leftmost node,
 *              then visits the root, and finally the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func); /* Recur on left subtree */
	func(tree->n); /* Execute function on current node */
	binary_tree_inorder(tree->right, func); /* Recur on right subtree */
}
