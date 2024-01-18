#include "sort.h"

/**
 * selection_sort - function that uses selection sort
 * @array: an array of integers
 * @n: size of the array
 * Return: Nothing
*/

void selection_sort(int *array, size_t n)
{
	size_t i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}

		if (min_idx != i)
		{
			int temp;

			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, n);
		}
	}
}