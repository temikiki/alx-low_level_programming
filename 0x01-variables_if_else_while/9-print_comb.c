#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	
	int n;
	for (n = 47; n <= 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(44);
		putchar(32);
		}
		putchar('\n');
		return (0);
	}
}
