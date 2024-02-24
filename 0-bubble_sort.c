#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - function that does sorting using
 * bubble sort.
 * @array: array to be sorted.
 * @size: size of array to be sorted.
 */

void bubble_sort(int *array, size_t size)
{
	int i, j, len, swapped;

	swapped = 0;
	len = (int)size;

	for (i = 0; i < len; i++)
	{
		swapped = 0;

		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
	}
}

/**
 * swap - swaps the values of ints given to it.
 * @x: first integer.
 * @y: second integer.
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
