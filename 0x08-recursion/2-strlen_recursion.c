#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - counts the lenght of the string
 * @s: an input string to be counted
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == 1)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
