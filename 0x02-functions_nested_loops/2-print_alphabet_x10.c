#include "main.h"

/**
 * print_alphabet_x10 - These contains the command to be executed
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
