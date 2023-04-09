#include "main.h"
#include <stdio.h>

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 0, max = 32768;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (mask == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			mask = 1;
		}
		max >> 1;
	}
}