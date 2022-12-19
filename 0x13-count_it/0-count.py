#!/usr/bin/python3
"""Module count_words."""


def count_words(subreddit, word_list):
    """
    Query the Reddit API, parses the title of all hot articles and prints a\
        sorted count of given keywords.

    Args:
        subreddit (str): subreddit to search in
        word_list (str): list of words to search for
    """
