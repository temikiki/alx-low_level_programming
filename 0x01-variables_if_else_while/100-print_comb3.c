#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	  int i;
        int e;

        i = 0;
        e = 0;

        while (e < 10)
        {
                i = 0;
                while (i < 10)
                {
                        if (e != i && e < i)
			{
                                putchar(e);
                                putchar(i);
                                if ( i == 9 && e == 8)
                                {
                                        break;
                                }
                                putchar(',');
                                putchar(' ');
                        }
                        i++;
                }
                e++;
        }
        putchar('\n');
        return (0);
}

