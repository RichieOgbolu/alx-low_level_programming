#include "main.h"

/**
 * _isdigit - contains the command to be executed
 * @c: character to be executed
 * Return: return 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
