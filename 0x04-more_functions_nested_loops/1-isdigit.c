#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for number
 *
 * @c: the characher is an ASCII value
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c >= 58)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
