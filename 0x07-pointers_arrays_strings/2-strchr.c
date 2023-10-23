#include "main.h"

/**
 * _strchr - main function
 * @s: function parameter 1
 * @c: function parameter 2
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (0);
}
