#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: given arr
 * @size: size of arr
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arra[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp

				print_array(array, size);
			}
		}
	}
}

