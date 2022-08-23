#include "sort.h"
/**
 * selection_sort - sorts array of nums in ascending order using Selection sort
 * @array: numbers to sort
 * @size: size of the array of numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0 ; i < size; i++)
	{
		for (j = i ; j < size; j++)
		{
			if (array[i] > array[j])
				swap(&array[i], &array[j]);
		}
	}
}
