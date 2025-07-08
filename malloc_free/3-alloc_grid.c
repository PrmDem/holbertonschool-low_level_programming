#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - returns pointer to 2d array
* @width: width of array
* @height: height of array
*
* Return: pointer to 2d array
* or NULL if fail.
*/

int **alloc_grid(int width, int height)
{
    int *twod_arr;
    int total = width * height;
    int i;

    if (width <= 0 || height <= 0)
        return (NULL);

    twod_arr = malloc(sizeof(int) * total);

    while (i <= total)
    {
        twod_arr[i][i] = 0;
    }

    return (twod_arr);
}
