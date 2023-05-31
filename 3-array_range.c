#include "main.h"
#include <stdlib.h>
#include <string.h>

int *array_range(int min, int max)
{
    if (min > max)
    {
        return NULL;
    }
    
    int size = max - min + 1;
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = min + i;
    }

    return arr;
}