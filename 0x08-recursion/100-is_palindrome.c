#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len;

    if (!s)
        return (0);

    len = strlen(s);

    if (len <= 1)
        return (1);
    else if (*s != s[len - 1])
        return (0);
    else {
        s[len - 1] = '\0';
        return (is_palindrome(s + 1));
    }
}
