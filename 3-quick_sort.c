#include "sort.h"
/**
 * quick_sort - function that sorts an array using quick sort algorithm
 * @array: input arrray
 * @size: size of the array
 * Return: NA
 */
void quick_sort(int *array, size_t size)
{
q_sort(array, 0, size - 1, size);
}
/**
 * q_sort - auxiliar func for the quick_sort function
 * @a: input arrray
 * @low: index of first element
 * @high: index of last element
 * @size: size of the array
 * Return: NA
 */
void q_sort(int *a, int low, int high, int size)
{
int p, w, i;
int tmp;
if (low < high)
{
p = high;
w = low;
for (i = low; i < high; i++)
{
if (a[i] < a[p])
{
if (i != w)
{
tmp = a[i];
a[i] = a[w];
a[w] = tmp;
print_array(a, size);
}
w++;
}
}
if (w != p && a[w] != a[p])
{
tmp = a[w];
a[w] = a[p];
a[p] = tmp;
print_array(a, size);
}
q_sort(a, low, w - 1, size);
q_sort(a, w + 1, high, size);
}
}
