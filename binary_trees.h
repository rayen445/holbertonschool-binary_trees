#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/* Basic Binary Tree Structure */
typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function Prototypes */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

#endif /* BINARY_TREES_H */
