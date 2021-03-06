#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followedby a new line
 * @s: is an array of input string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	putchar('\n');
	}
}
