#include "sort.h"

/**
 * swap - swaps two elements
 * @array: the integer array to sort
 * @size: the size of the array
 * @x: address of first value
 * @y: address of second value
 *
 * Return: void
 */
void swap(int *array, size_t size, int *x, int *y)
{
	if (*x != *y)
	{
		*x = *x + *y;
		*y = *x - *y;
		*x = *x - *y;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - partitions the array
 * @array: the integer array to sort
 * @size: the size of the array
 * @low: the low index of the sort range
 * @high: the high index of the sort range
 *
 * Return: void
 */
size_t lomuto_partition(int *array, size_t size, ssize_t low, ssize_t high)
{
	int i, j, pvt = array[high];

	for (i = j = low; j < high; j++)
		if (array[j] < pvt)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[high]);

	return (i);
}

/**
 * quicksort - quicksorts via Lomuto partitioning scheme
 * @array: the integer array to sort
 * @size: the size of the array
 * @low: the low index of the sort range
 * @high: the high index of the sort range
 *
 * Return: void
 */
void quicksort(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t t = lomuto_partition(array, size, low, high);

		quicksort(array, size, low, t - 1);
		quicksort(array, size, t + 1, high);
	}
}

/**
 * quick_sort - calls quicksort
 * @array: the integer array to sort
 * @size: the size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size || size < 2)
		return;
	quicksort(array, size, 0, size - 1);
}
