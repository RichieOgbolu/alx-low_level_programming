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
	int i = 0;

	while (i < 26)
	{
		putchar(alpha);
		alpha++;
		i++;
	}
	alpha = 'A';

	while (i < 26)
	{
		putchar(alpha);
		alpha++;
		i++;
	}
	putchar('\n');
	return (0);
}
