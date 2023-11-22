#include "main.h"

/**
 * argstostr - function that concatenates
 * all program arguments
 * @ac: argument count
 * @av: arguement vector
 * Return: A pointer ti the array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			aout[k] = av[i][j];
			k++;
		}
		if (aout[k] == '\0')
		{
			aout[k++] = '\n';
		}
	}
	return (aout);
}
