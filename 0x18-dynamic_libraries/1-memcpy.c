#include "main.h"

/**
 * _memcpy - main function
 * @src: source parameter
 * @dest: destination parameter
 * @n: function parameter
 * Return: copy of memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
