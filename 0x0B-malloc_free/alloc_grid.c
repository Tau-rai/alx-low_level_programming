#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
        int k, j;
        int **arr; /*= malloc(height * sizeof(int));*/

        if (width < 1 || height < 1)
        {
                return (NULL);
        }
        arr = malloc(width * sizeof(int *));
        if (arr == NULL)
                return (NULL);
        for (k = 0; k < height; k++)
        {
                arr[k] = malloc(width * sizeof(int));
                if (arr[k] == NULL)
                {
                        for (j = 0; j < k; j++)
                        {
                                free(arr[j]);
                        }
                        free(arr);

                        return (NULL);
                }
                for (j = 0; j < height; j++)
                {
                        arr[k][j] = 0;
                }
        }
        return (arr);
}
