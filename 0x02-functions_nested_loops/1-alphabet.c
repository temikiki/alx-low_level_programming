#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet in lower case
 *
 * Return: Alway 0
 */

void print_alphabet(void)
{
	char t;

	for (t = 97; t < 122; t++)
	{
	putchar(t);
	}
	putchar('\n');

}
