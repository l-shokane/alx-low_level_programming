#include "main.h"

/**
  * reverse_array - Name of function
  * @a: Function parameter 1
  * @n: Function parameter 2
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}
