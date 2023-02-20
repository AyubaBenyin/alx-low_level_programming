#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char message[] = "and that piece of art is useful
		\" - Dora Korpar, 2015-10-19\n";
	const int length = sizeof(message) - 1;
	const int file_descriptor = 2;

	write(file_descriptor, message, length);

	return (1);
}
