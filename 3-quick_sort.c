#include "sort.h"

void quick_sort(int *array, size_t size)
{
    if (size < 2)
        return;

    quick_sort_recursive(array, 0, size - 1, size);
}

void quick_sort_recursive(int *array, ssize_t low, ssize_t high, size_t size)
{
    ssize_t pivot;

    if (low < high)
    {
        pivot = lomuto_partition(array, low, high, size);
        quick_sort_recursive(array, low, pivot - 1, size);
        quick_sort_recursive(array, pivot + 1, high, size);
    }
}

ssize_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
    int pivot = array[high];
    ssize_t i = low - 1;
    int tmp;

    for (ssize_t j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            print_array(array, size);
        }
    }

    tmp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = tmp;
    print_array(array, size);

    return i + 1;
}

