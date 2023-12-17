#include "sort.h"

/**
 * selection_sort - a function that use selction sort algorithm to sort an
 * array of integers
 *
 * @array: The array to be sorted
 * @size: The size of @array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int least;
	int least_index;

	for (i = 0; i < size; i++)
	{
		least = array[i];
		least_index = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < least)
			{
				least = array[j];
				least_index = j;
			}
		}
		if (least != array[i])
		{
			temp = array[i];
			array[i] = least;
			array[least_index] = temp;
			print_array(array, size);
		}
	}

}
