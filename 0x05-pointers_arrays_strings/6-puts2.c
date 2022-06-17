#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - takes string as a parameter
 *
 * @str: string taken as input
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}