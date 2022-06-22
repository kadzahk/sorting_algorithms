#include "sort.h"

/**
 * partition_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array_lim: array of integers
 * @start: Starting Index
 * @end: Ending Index
 * @size: size of the array
 * Return: null
 */
void partition_sort(int array_lim[], int start, int end, size_t size)
{
int index_p = 0;

if (start < end)
{
index_p = lim(array_lim, start, end, size);
partition_sort(array_lim, start, index_p - 1, size);
partition_sort(array_lim, index_p + 1, end, size);
}
}

/**
 * lim - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array_lim: array of integers
 * @start: Starting Index
 * @end: Ending Index
 * @size: size of the array
 * Return: null
 */
int lim(int array_lim[], int start, int end, size_t size)
{
int limit = array_lim[end];
int i = (start - 1), x = 0;

for (x = start; x <= end - 1; x++)
{
if (array_lim[x] <= limit)
{
i++;
if (i != x)
{
simple_swap(&array_lim[i], &array_lim[x]);
print_array(array_lim, size);
}
}
}

if (i + 1 != end)
{
simple_swap(&array_lim[i + 1], &array_lim[end]);
if (i != x)
print_array(array_lim, size);
}
return (i + 1);
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

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array of integers
 * @size: size of the array
 * Return: null
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
partition_sort(array, 0, size - 1, size);
}
