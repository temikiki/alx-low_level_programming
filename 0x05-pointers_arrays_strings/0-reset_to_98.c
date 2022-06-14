#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - reset n to new number
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int c;
	
	c = 36;


	n = &c;

	putchar(c);

	*n = 90;

	putchar(c);
}
