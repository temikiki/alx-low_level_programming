#include <stdio.h>
#include "main.h"

/**
 * _abs - gives the absolute value
 * of an integer.
 *
 * @t: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int t)
{
	if (t >= 0)
	{
		return (t);
	}
	else
	{
		return (t * -1);
	}
}
