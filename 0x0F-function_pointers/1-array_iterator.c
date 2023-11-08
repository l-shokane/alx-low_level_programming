#include "function_pointers.h"

/**
 * array_iterator - executes function on each elements of array
 * @array: the array
 * @size: size of the array
 * @action: function to perfom on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
