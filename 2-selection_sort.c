#include "sort.h"

/**
 * swap - function
 * @a: a
 * @b: b
 */
void swap(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

/**
 * selection_sort - sorts array of nums in ascending order using Selection sort
 * @array: numbers to sort
 * @size: size of the array of numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0 ; i < size - 1; i++)
	{
		for (j = i ; j < size - 1; j++)
		{
			if (array[i] > array[j])
				swap(&array[i], &array[j]);
		}
	}
}
