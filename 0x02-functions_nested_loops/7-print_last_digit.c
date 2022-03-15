#include "main.h"

/**
 * print_last_digit - contains the command to be executed
 * @j: the character to be executed
 * Return: returns i
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
