#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @a: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int a)
{
	int t;

	t = a % 10;
	if (t < 0)
	{
		_putchar(-t + 48);
		return (-t);
	}
	else
	{
		_putchar(t + 48);
		return (t);
	}
}
