#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void selection_sort(int *array, size_t size)
{
    size_t n, z, y;
    int temp;

    for (n = 0; n < size - 1; n++)
    {
        z = n;
        for (y = n + 1; y < size; y++)
        {
            if (array[y] < array[z])
                z = y;
        }
        
        if (z != n)
        {
            temp = array[z];
            array[z] = array[n];
            array[n] = temp;

            print_array(array, size);
        }
    }
}

