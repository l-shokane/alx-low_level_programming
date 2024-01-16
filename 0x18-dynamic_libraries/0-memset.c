#include "main.h"
/**
 * _memset - main function
 * @b: value for the memory
 * @s: function parameter 1
 * @n: function parameter 2
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
