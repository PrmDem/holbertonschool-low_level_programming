#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* free_grid - frees previously created grid
* @grid: address of that grid
* @height: height of the grid
*
* Return: nothing (void)
*/

void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
            free(grid[i]);
    }

    free(grid);
}