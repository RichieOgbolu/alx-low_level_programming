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
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
			alpha++;
			i++;
	}
	putchar('\n');
	return (0);
}
