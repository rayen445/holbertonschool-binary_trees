#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: The function deletes an entire binary tree. If `tree` is NULL,
 *              it does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree != NULL)
    {
        /* Delete left subtree */
        binary_tree_delete(tree->left);
        /* Delete right subtree */
        binary_tree_delete(tree->right);
        /* Free current node */
        free(tree);
    }
}
