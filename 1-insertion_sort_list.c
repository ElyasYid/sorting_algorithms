#include "sort.h"

/**
 * swap - swaps 2 nodes in a doubly-linked list
 * @x: address of first node
 * @y: address of second node
 *
 * Return: void
 */
void swap(listint_t *x, listint_t *y)
{
	if (x->prev)
		x->prev->next = y;
	if (y->next)
		y->next->prev = x;
	x->next = y->next;
	y->prev = x->prev;
	x->prev = y;
	y->next = x;
}

/**
 * insertion_sort_list - insertion sorts a doubly-linked list
 * @list: address of pointer to head node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *k, *m;

	if (!list || !*list || !(*list)->next)
		return;
	k = (*list)->next;
	while (k)
	{
		m = k;
		k = k->next;
		while (m && m->prev)
		{
			if (m->prev->n > m->n)
			{
				swap(m->prev, m);
				if (!m->prev)
					*list = m;
				print_list((const listint_t *)*list);
			}
			else
				m = m->prev;
		}

	}
}
