#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *array_range(int min, int max)
{
    int *range;
    int i = 0;

    if (min > max)
        return (NULL);

    range = malloc(sizeof(int) * (max - min + 2));
    if (range == NULL)
        return (NULL);

    for (i = 0; i <= max; i++)
    {
        range[i] = (min + i);
    }

    range[i] = '\0';

    return (range);
}
