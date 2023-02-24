#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = 0, x, y = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < y)
					_putchar(' ');
				else
					_putchar('#');
			}
			y--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
