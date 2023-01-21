#include "sort.h"
/**
 *selection_sort - a function that sorts an array of integers
 *@array: the array to be sorted
 *@size: the size of array
 *
 *Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, swap;
	int temp;

	for (i = 0; i < size; i++)
	{
		swap = 1;
		while (swap == 1)
		{
			swap = 0;
			for (j = i; j < size; j++)
			{
				if (array[i] > array[j])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					swap = 1;
					print_array(array, size);
					break;
				}
			}
		}
	}
}
