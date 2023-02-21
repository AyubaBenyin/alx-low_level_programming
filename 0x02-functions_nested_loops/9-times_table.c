#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * lone = row, clone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int lone, clone, d;

	for (lone = 0; lone <= 9; lone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (clone = 1; clone <= 9; clone++)
		{
			d = (lone * clone);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (clone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
