#include "main.h"

/**
 * print_times_table - Prints a multiplication table up to param
 * @i: The number to be treated
 *
 * Return: Number matrix
 */
void print_times_table(int i)
{
	int x, y, ab;

	if (i >= 0 && i <= 15)
	{
		for (x = 0; x <= i; a++)
		{
			_putchar(48);
			for (y = 1; y <= i; y++)
			{
				ab = x * y;
				_putchar(44);
				_putchar(32);
				if (ab <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(ab + 48);
				}
				else if (ab <= 99)
				{
					_putchar(32);
					_putchar((ab / 10) + 48);
					_putchar((ab % 10) + 48);
				}
				else
				{
					_putchar(((ab / 100) % 10) + 48);
					_putchar(((ab / 10) % 10) + 48);
					_putchar((ab % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
