#include "sort.h"

/**
 * bubble_sort - function uses bubble sort
 * @array: array to sort
 * @n: size of array
 * Return: Nothing
*/

void bubble_sort(int *array, size_t n)
{
	size_t i, j;

	if (n < 2)
		return;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp;

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, n);
			}
		}
	}
}
