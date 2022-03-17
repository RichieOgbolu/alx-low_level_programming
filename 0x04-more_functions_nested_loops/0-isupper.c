#include "main.h"

/**
 * _isupper - contains the command to be executed
 * @c: character to be executed
 * Return: return 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
