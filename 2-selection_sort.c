#include "sort.h"

/**
* selection_sort - function that sorts an array of integers in ascending order
* using the Selection sort algorithm
* @array: pointer to the array of size "size"
* @size: size of the array
* Return: Nothing
*/

void selection_sort(int *array, size_t size)
{
size_t i = 0, j = 0, pos = 0;

if (array == NULL || size < 2)
return;

for (i = 0; i < (size - 1); i++)
{
pos = i;
for (j = (i + 1); j < size; j++)
{
if (array[j] < array[pos])
pos = j;
}
if (pos != i)
{
simple_swap(&array[pos], &array[i]);
print_array(array, size);
}
}
}
/**
 * simple_swap - function to swap two integers
 * @l1: int to swap with l2
 * @l2: int to swap with l1
 * Return: nothing
 */
void simple_swap(int *l1, int *l2)
{
int temp;

temp = *l1;
*l1 = *l2;
*l2 = temp;
}
