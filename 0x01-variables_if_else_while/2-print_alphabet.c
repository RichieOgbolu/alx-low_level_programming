#include <stdlib.h>
#include <stdio.h>

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
	putchar('\n');
	return (0);
}
