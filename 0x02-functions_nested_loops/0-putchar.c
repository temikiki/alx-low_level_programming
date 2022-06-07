#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i[9];

       	i[0] = '_';
	i[1] = 'p';
	i[2] = 'u';
	i[3] = 't';
	i[4] = 'c';
	i[5] = 'h';
	i[6] = 'a';
	i[7] = 'r';
	i[8] = '\0';

	int a;
	for (a =0; a < 9; a++)
	{
	putchar(a);
	}

	putchar('\n');
	return (0);
}
