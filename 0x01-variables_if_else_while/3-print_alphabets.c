#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        char i = 'a';
	char t = 'A';

        for (i = 'a'; i <= 'z'; i++)
        putchar(i);
	for (t = 'A'; t <= 'Z'; t++)
	putchar(t);
        putchar('\n');
        return (0);
}

