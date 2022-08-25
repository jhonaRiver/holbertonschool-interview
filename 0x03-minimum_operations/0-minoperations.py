#!/usr/bin/python3
"""
module minOperations
"""


def minOperations(n):
    """
    calculates the fewest number of operations needed to result in exactly n H
    characters in the file
    Args:
        n (int): number of H characters

    Returns:
        int: minimum number of operations needed
    """
    if n < 2:
        return 0
    count = 1
    li = list()
    value = n
    while value != 1:
        count += 1
        if value % count == 0:
            while value % count == 0 and value != 1:
                value /= count
                li.append(count)
    return sum(li)
