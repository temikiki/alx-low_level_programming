#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: the string
 *
 * Return: no return value
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
