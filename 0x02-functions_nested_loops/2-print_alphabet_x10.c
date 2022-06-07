#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return; Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 95; i <= 122; i++)
	{
		for( j =0; j < 10; j++)
		{
		putchar(i);
		}
	}	
	putchar('\n');
}
