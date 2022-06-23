#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints astring in the reverse
 * @s:is an input string to be printed in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
		
	}
}
