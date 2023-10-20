#include "main.h"
/**
 * _strncpy - Name of function
 * @dest: function parameter 1
 * @src: function parameter 2
 * @n: fnction parameter 3
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while  (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

