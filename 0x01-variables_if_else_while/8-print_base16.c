#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 0;

	while (i < 6)
	{
		putchar(alpha);
		alpha++;
		i++;
	}
	putchar('\n');
	return (0);
}
