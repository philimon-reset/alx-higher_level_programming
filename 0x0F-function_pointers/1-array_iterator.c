#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: name
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: return index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if ((array != NULL) && (action != NULL))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
			{
				_putchar (i);
			}
		}
	}
	return (0);
}
