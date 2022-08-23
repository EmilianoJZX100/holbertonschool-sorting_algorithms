#include "sort.h"

/**
 * selection_sort - sorts array of nums in ascending order using Selection sort
 * @array: numbers to sort
 * @size: size of the array of numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array)
		return;

	for (i = 0 ; i < size - 1; i++)
	{
		for (j = i ; j < size - 1; j++)
		{
			if (array[i] > array[j])
				array[i] = array[j];
		}
	}
}
