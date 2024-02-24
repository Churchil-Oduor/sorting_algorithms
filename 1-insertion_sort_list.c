#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - algo that performs insertion sort.
 * @list: list to be sorted.
 */

void insertion_sort_list(listint_t **list)
{
	/**loop through the list**/
	listint_t *left, *right, *temp;

	left = *list;
	right = left->next;


	while (left->next != NULL)
	{
		if (left->n > right->n)
		{
			swapNodes(left, right);
			print_list(*list);
			while (left->prev)
			{
				temp = left->prev;
				if (temp->n > left->n)
				{
					swapNodes(temp, left);
					print_list(*list);
				}
				left = temp;
			}
		}
	}

}

/**
 * swapNodes - swapnodes in doubly linked lists.
 * @right: right node.
 * @left: left node.
 */

void swapNodes(listint_t *left, listint_t *right)
{
	listint_t *lleft, rright;

	if (left->prev && right->next)
	{
		
		/**initializing the values for lleft and rright**/

		lleft = left->prev;
		rright = right->next;

		lleft->next = right;
		rright->prev = left;

		left->prev = right;
		left->next = rright;

		right->prev = lleft;
		right->next = left;
	}
	else if (!left->prev && right->next)
	{
		rright = right->next;
		left->next = rright;
		rright->prev = left;

		right->prev = NULL;
		right->next = left;
	}
	else if (left->prev && !right->next)
	{
		lleft = left->prev;
		lleft->next = right;
		right->prev = lleft;

		left->next = NULL;
		left->prev = right;
	}
}
