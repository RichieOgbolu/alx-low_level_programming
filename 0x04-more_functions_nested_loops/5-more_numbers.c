#include "main.h"

/**
 * more_numbers - contains the command to be executed
 * Return: returns void
 */

void more_numbers(void)
{
	int i, j;

	while (j < 10)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
