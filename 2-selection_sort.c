#include "sort.h"
/**
 * swap- Swaps two items in an array.
 * @array: The array to modify.
 * @l: The index of the left item.
 * @r: The index of the right item.
 */
void swap(int *array, size_t l, size_t r)
{
	int temp;

	if (array != NULL)
	{
		temp = array[l];
		array[l] = array[r];
		array[r] = temp;
	}
}

/**
 * selection_sort- a function that sorts an array using selection sort
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: sorted array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		if (i != min_idx)
		{
			swap(array, i, min_idx);
			print_array(array, size);
		}
	}
}
