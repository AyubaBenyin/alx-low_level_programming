#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @x: an inout integer pointer
 * @y: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *x, int *y)
{
	int aux;

	aux = *x;
	*x = *y;
	*y = aux;
}
