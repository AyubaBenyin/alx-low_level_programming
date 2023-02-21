#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nxy: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nxy)
{
	int abc;

	abc = (nxy % 10);

	if (abc < 0)
	{
		abc = (-1 * abc);
	}

	_putchar(abc + '0');
	return (abc);
}
