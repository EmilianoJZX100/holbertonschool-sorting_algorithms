#include "sort.h"

/**
 * bubble_sort - sorts an array of numbers in ascending order with Bubble sort
 * @array: ints to sort
 * @size: size of the array of numbers
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j, temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
