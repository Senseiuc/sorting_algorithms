#include "sort.h"
/**
 *bubble_sort - a function that sorts an array of integers
 *@array: the array to be sorted
 *@size: the size of array
 *
 *Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, swap;
	int temp;

	for (i = 0; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
		if (swap == 0)
			break;
	}
}
