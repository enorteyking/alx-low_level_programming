#include "main.h"

/**
 * _isdigit - 'Checks for a digit (0 through 9)
 * @c: It is the digit to be checked
 *
 * Return: 1 if is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
