#!/usr/bin/python3
"""
module canUnlockAll
"""


from matplotlib.pyplot import box


def canUnlockAll(boxes):
    """
    Determines if all the boxes can be opened
    Args:
        boxes (list): list of lists
    """
    keyset = [0]
    for key in keyset:
        for content in boxes[key]:
            if content not in keyset and content < len(boxes):
                keyset.append(content)
    return len(keyset) == len(boxes)
