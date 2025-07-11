#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *array_range(int min, int max)
{
    int *range;
	int count = 0;
    int i = 0;

    if (min > max)
        return (NULL);

    range = malloc(sizeof(int) * (max - min + 1));
    if (range == NULL)
	{
		free(range);
        return (NULL);
	}

    for (i = min; i <= max; i++)
    {
        range[count] = i;
		count++;
    }

    return (range);
}
