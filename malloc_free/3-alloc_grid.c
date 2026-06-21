#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **array;
    int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    array = malloc(sizeof(int *) * height);
    if (array == NULL)
        return NULL;

    for (i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);
        if (array[i] == NULL)
        {
            /* Free all previously allocated rows */
            for (j = 0; j < i; j++)
                free(array[j]);
            free(array);
            return NULL;
        }

        /* Initialize row */
        for (j = 0; j < width; j++)
            array[i][j] = 0;
    }

    return array;
}
