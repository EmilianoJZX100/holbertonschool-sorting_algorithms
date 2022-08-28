#include "sort.h"

/**
 * swap - swaps positions of the arrays
 * @a: pointer
 * @b: pointer
 */
void swap(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}

/**
 * selection_sort - sorts array of nums in ascending order using Selection sort
 * @array: numbers to sort
 * @size: size of the array of numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;

	for (i = 0 ; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}
		if (index != i)
		{
			swap(&array[index], &array[i]);
			print_array(array, size);
		}
	}
}
