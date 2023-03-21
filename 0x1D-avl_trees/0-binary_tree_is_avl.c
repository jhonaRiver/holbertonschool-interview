#include "binary_trees.h"

/**
 * _abs - ...
 *
 * @x: ...
 * Return: ...
 */
int _abs(int x)
{
    if (x < 0)
        return (x * -1);
    return (x);
}

/**
 * is_tree_valid_avl - ...
 *
 * @tree: ...
 * @min_tree_v: ...
 * @max_tree_v: ...
 * @height: ...
 * Return: ...
 */
int is_tree_valid_avl(const binary_tree_t *tree, int min_tree_v, int max_tree_v, int *height)
{
    int height1 = 0, height2 = 0;

    if (tree == NULL)
        return (1);
    if (tree->n <= min_tree_v || tree->n >= max_tree_v)
        return (0);
    if (is_tree_valid_avl(tree->left, min_tree_v, tree->n, &height1) == 0 || is_tree_valid_avl(tree->right, tree->n, max_tree_v, &height2) == 0)
        return (0);
    *height = ((height1 > height2) ? height1 : height2) + 1;
    if (_abs(height1 - height2) > 1)
        return (0);
    return (1);
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid avl tree
 *
 * @tree: pointer to the root node of the tree
 * Return: 1 if tree is a valid avl tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
    int height = 0;

    if (tree == NULL)
        return (0);
    return (is_tree_valid_avl(tree, INT_MIN, INT_MAX, &height));
}
