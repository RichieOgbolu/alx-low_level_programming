#include "main.h"

/**
 * _islower - contains the command to be executed
 * @c: character to be executed
 * Return: Return 1 if c is lowercase and return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
