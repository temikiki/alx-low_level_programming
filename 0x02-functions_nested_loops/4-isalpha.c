#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Entry point
 *
 * @c: the cahracter in ASCII code
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 || c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
