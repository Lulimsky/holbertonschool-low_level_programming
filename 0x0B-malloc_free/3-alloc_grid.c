#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - create a 2 dimension array of integers
 *@width: width of the grid
 *@height: height of the grid
 *Return: NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int alto, ancho;
	int **grilla;

	if (width <= 0 || height <= 0)
		return (NULL);

	grilla = (int **)malloc(height * sizeof(int *));

	if (grilla == NULL)
		return (NULL);

	for (alto = 0; alto < height; alto++)
	{
		grilla[alto] = (int *)malloc(width * sizeof(int));
		if (grilla[alto] == NULL)
		{
			for (ancho = 0; ancho <= alto; ancho++)
				free(grilla[ancho]);
			free(grilla);
			return (NULL);
		}
	}

	for (ancho = 0; ancho < height; ancho++)
	{
		for (alto = 0; alto < width; alto++)
		{
			grilla[ancho][alto] = 0;
		}
	}
	return (grilla);
}
