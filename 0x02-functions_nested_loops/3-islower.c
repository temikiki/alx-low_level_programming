#include <stdio.h>
#include "main.h"

/**
 * _islower - returns 1 for lower case and 0 for uppercase
 *
 * Return: 0 or 1
 */
int _islower(int c)
{

	if (c >= 95 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

