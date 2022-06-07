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
	char i[] = "_putchar";

	int a;
	for (a =0; a < 8; a++)
	{
	putchar(i[a]);
	}

	putchar('\n');
	return (0);
}
