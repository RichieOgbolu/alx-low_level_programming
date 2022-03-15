#include "main.h"

/**
 * _abs - contains the command to be executed
 * @n: character to be executed
 * Return: return -1 * n if n is below 0 and returns n otherwise
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
