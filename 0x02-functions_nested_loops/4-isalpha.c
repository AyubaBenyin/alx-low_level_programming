#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @i: single letter input
 * Return: 1 if i is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int i)
{
	if (((i >= 'a') && (i <= 'z')) || ((i >= 'A') && (i <= 'Z')))
		return (1);
	else
		return (0);
}
