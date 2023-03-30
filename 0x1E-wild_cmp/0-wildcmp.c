#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings
 *
 * @s1: string to compare
 * @s2: string to compare, can contain *
 * Return: 1 if identical, or 0
 */
int wildcmp(char *s1, char *s2)
{
    if (!*s1)
    {
        if (*s2 == '*')
            return (wildcmp(s1, s2 + 1));
        return (!*s2);
    }
    if (*s2 == '*')
        return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));
    return (0);
}
