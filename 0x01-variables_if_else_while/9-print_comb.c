#include <stdio.h>

/*main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int t;
	for (t = 48; t <= 57; t++)
	{
		putchar(t);
		if (t != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
		putchar('\n');
		return (0);
}
