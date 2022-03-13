#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';
	int i = 26;

	while (i > 0)
	{
		putchar(alpha);
		alpha--;
		i--;
	}
	putchar('\n');
	return (0);
}
