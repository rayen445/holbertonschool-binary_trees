#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The value in the node
 *        must be passed as a parameter to this function.
 *
 * Description: Post-order traversal starts from the leftmost leaf node,
 *              then visits the right subtree, and finally the root.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_postorder(tree->left, func); /* Recur on left subtree */
    binary_tree_postorder(tree->right, func); /* Recur on right subtree */
    func(tree->n); /* Execute function on current node */
}
