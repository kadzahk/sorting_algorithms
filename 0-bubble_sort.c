#include "sort.h"

/**
* bubble_sort - function that sorts an array of integers in ascending order
* using the Bubble sort algorithm
* @array: pointer to the array of size
* @size: size of the array
* Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
size_t x = 0, y = 0;
int t_arr = 0;

if (!array || size <= 1)
return;

for (x = 0; x < size; x++)
{
for (y = 0; y < (size - x - 1); y++)
{
if (array[y] > array[y + 1])
{
t_arr = array[y];
array[y] = array[y + 1];
array[y + 1] = t_arr;
print_array(array, size);
}
}
}
}
