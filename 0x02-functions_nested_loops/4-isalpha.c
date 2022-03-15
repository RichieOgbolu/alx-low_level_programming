#include "main.h"

/**
 * _isalpha - contains the command to be executed
 * @c: character to be executed
 * Return: return 1 if chareacter is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
