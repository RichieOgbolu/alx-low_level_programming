#include "main.h"

/**
 * print_sign - contains the command to be executed
 * @n: character to be executed
 * Return: return 1 if positive, -1 if negative and 0 if equal to zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
