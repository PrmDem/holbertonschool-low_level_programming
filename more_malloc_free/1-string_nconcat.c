#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: bytes of s2 to use
*
* Return: pointer to start of string
* or NULL if failure, s1 or s2 == 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int size1, size2, i, j;
    size1 = size2 = i = j = 0;
    char *string;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    while (s1[size1] != '\0')
    {
        size1++;
    }

    while (s2[size2] != '\0')
    {
        size2++;
    }

    if (n >= size2)
        n = size2;

    string = malloc(size1 + n + 1);
    if (string == NULL)
        return (NULL);

    for (i = 0; i < size1; i++)
    {
        string[i] = s1[i];
    }

    for (j = 0; j < n; j++)
    {
        string[i + j] = s2[j];
    }

    string[i + j] = '\0';

    return (string);
}
