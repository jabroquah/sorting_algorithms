#include "sort.h"
/**
* bubble_sort - Sort an array with bubble sort algorithm
* @array: array to be sorted
* @size: size of array
*
*/

void bubble_sort(int *arrary, size_t size)
{
	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for (int k = 0; k < size; k++)
				{
					print("%d ", array[k]);
				}
				printf("\n");
			}
		}
	}
}
