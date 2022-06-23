#include <stdio.h>
#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n:is an integer value
 *
 * Return: the result of the function and if an error occur returns -1
 */

int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
