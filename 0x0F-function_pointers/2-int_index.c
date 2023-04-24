#include "function_pointers.h"

/**
  * int_index - function searches for an integer
  * @array: array of elements that contain integers
  * @size: number of elements in the array @array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: -1 if no element matches
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
