#include "main.h"

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 is string is palindrome, 0 if it is not.
 */

int is_palindrome(char *s)
{
	if (s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns lengths of a string
 * @s: string
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 if string is palindrome, 0 if not a palindrome
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if (i >= len)
	return (1);
	return (check_pal(s, i + 1, len - 1));
}
