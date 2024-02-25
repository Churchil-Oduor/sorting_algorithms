#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - algorithm for the selection sort.
 * @array: array to be sorted.
 * @size: size of the array.
 */

void selection_sort(int *array, size_t size)
{
	int i, j, min_value_index;

	for (i = 0; i < (int)size; i++)
	{
		min_value_index = i;
		for (j = i; j < (int)size; j++)
			if (array[min_value_index] > array[j])
				min_value_index = j;

		if (min_value_index > i)
		{
			swap(&array[min_value_index], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps two variable values present in an array.
 * @@x: pointer to variable.
 * @y pointer to thr other variable.
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
