#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - function main entry
 * @grid: input
 * @height: input
 */

void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
	size_t i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	}
}

/**
 * strtow - function that splits strinh into
 * two
 * @str: string to be splited into two
 * Return: Apointer to the new allocated memory for string
 */
char **strtow(char *str)
{
	char **aout;
	size_t c, height, i, j, al;

	if (str == NULL || *str == '\0')
	return (NULL);

	for (c = height = 0; str[c] != '\0'; c++)
	{
	if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	}

	aout = (char **)malloc((height + 1) * sizeof(char *));

	if (aout == NULL)
	{
		return (NULL);
	}

	for (i = al = 0; i < height; i++)
	{
	size_t word_len = 0;
	while (str[al] == ' ')
		al++;

	while (str[al + word_len] != ' ' && str[al + word_len] != '\0')
		word_len++;

	aout[i] = (char *)malloc((word_len + 1) * sizeof(char));

	if (aout[i] == NULL)
	{
		ch_free_grid(aout, i);
		return (NULL);
	}

	for (j = 0; j < word_len; j++)
	{
		aout[i][j] = str[al + j];
	}
	aout[i][j] = '\0';

        
	al += word_len;
	}

	aout[i] = NULL;

	return (aout);
}


