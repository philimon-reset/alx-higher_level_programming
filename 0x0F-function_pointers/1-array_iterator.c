#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: name
 * @size: size of array
 * @action: pointer to function
 * 
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
