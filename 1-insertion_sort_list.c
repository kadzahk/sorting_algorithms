#include "sort.h"

/**
* insertion_sort_list - function that sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* @list: double pointer to the doubly linked list
* Return: void
*/

void insertion_sort_list(listint_t **list)
{
listint_t *first_l = NULL, *secon_l = NULL;

if (!list || !(*list) || !(*list)->next)
return;

first_l = *list;
while (first_l)
{
if (first_l->prev != NULL && first_l->n < first_l->prev->n)
{
*list = swap(*list, first_l, 1);
secon_l = first_l;
first_l = first_l->next;

while (secon_l->prev != NULL)
{
if (secon_l->n < secon_l->prev->n)
{
*list = swap(*list, secon_l, 1);
continue;
}
secon_l = secon_l->prev;
}
}
first_l = first_l->next;
}
}

/**
 * swap - Swapping function
 * @node: Node to swap at the following directio
 * @node_dir: Right is 0, Left is 1
 * @list: list to print
 * Return: Current node
 */

listint_t *swap(listint_t *list, listint_t *node, int node_dir)
{
listint_t *aux_list_1 = NULL, *aux_list_2 = NULL, *temp_list = NULL;

if (node_dir == 0)
{
aux_list_2 = node;
aux_list_1 = aux_list_2->next;
}
else
{
aux_list_1 = node;
aux_list_2 = aux_list_1->prev;
}

temp_list = aux_list_1->next;
aux_list_1->next = aux_list_2;
aux_list_1->prev = aux_list_2->prev;
if (aux_list_2->prev != NULL)
aux_list_2->prev->next = aux_list_1;
else
list = aux_list_1;
aux_list_2->next = temp_list;
aux_list_2->prev = aux_list_1;
if (temp_list != NULL)
temp_list->prev = aux_list_2;

print_list((const listint_t *) list);
return (list);
}
