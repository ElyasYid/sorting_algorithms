#include "sort.h"

/**
 * max_gap - gets the largest Knuth Sequence gap for this size
 * @size: the size of the array
 *
 * Return: the gap size
 */
size_t max_gap(size_t size)
{
	size_t n;

	n = 1;
	while (n < size)
		n = n * 3 + 1;
	return ((n - 1) / 3);
}

/**
 * shell_sort - shell_sort
 * @array: the integer array to sort
 * @size: the size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int k;

	if (!array || !size)
		return;


	for (gap = max_gap(size); gap; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			k = array[i];
			for (j = i; j > gap - 1 && array[j - gap] > k; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = k;
		}
		print_array(array, size);
	}
}
