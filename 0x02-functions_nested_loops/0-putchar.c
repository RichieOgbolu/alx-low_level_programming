#include "main.h"

/**
 * main - Entry point
 * Description: Prints putchar
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alpha[] = "_putchar\n";
	int i = 0;


	while (alpha[i])
	{
		_putchar(alpha[i]);
		i++;
	}
	return (0);
}
