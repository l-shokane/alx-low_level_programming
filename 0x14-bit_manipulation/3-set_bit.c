#include "main.h"

/**
 * set_bit - function that sets the
 * value of a bit to 1.
 * @n: number
 * @index: index
 * Return: 1 if success OR -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
