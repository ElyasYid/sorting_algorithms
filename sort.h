#ifndef SORT_H
#define SORT_H

#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void quicksort(int *array, size_t size, ssize_t low, ssize_t high);
void quick_sort(int *array, size_t size);
void swap(int *array, size_t size, int *x, int *y);
size_t lomuto_partition(int *array, size_t size, ssize_t low, ssize_t high);
void bubble_sort(int *array, size_t n);
void insertion_sort_list(listint_t **list);
void swap_list(listint_t *x, listint_t *y);
void selection_sort(int *array, size_t n);
void shell_sort(int *array, size_t size);
size_t max_gap(size_t size);

#endif
