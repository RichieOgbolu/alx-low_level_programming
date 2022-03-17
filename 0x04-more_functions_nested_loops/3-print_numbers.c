#include "main.h"

/**
 * print_numbers - contains command to be executed
 * Return: returns void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
