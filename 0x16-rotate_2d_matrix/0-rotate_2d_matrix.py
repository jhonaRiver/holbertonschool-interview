#!/usr/bin/python3
"""Module rotate_2d_matrix."""


def rotate_2d_matrix(matrix):
    """
    Rotate a matrix 90 degrees clockwise.

    Args:
        matrix (list): matrix to rotate
    """
    n = len(matrix)
    order = []
    for i in range(n):
        for j in range(n - 1, -1, -1):
            order.append(matrix[j][i])
    for i in range(n):
        for j in range(n):
            matrix[i][j] = order.pop(0)
