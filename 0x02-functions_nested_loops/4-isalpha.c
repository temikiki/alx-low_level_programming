#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Entry point
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 65 || c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
