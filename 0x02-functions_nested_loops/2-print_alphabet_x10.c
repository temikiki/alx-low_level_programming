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

	i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j <= 122)
		{
		putchar(j);
		j++;
		}
		putchar('\n');
		i++;
	}

}
