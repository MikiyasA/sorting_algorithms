#include "sort.h"

/**
 * bubble_sort - sort the list of array in bubble sort way
 * @array: an array to be sorted
 * @size: size of array
 * Return: NA
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;

size = sizeof(array) + 2;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
