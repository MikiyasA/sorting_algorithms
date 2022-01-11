#include "sort.h"

/**
 * selection_sort - soat the array in selection sort way
 * @array: array to be sort
 * @size: size of array
 * Return: NA
 *
 */

void selection_sort(int *array, size_t size)
{
size_t i, j, min;
int temp;

for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
{
min = j;
}
}
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}

