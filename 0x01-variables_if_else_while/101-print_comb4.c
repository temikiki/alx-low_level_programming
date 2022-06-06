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
	int a;
	i = 48;
	e = 48;
	a = 48;
	while (e < 58)
	{
		i = 48;
		 while (i < 58)
		 {
			 a = 48;
			 while (a < 58)
			 {
				 if ( e != i && e != a && i != a && e < i && i <a)
				 {
					 putchar(e);
					 putchar(i);
					 putchar(a);
					 if (i == 56 && e == 55 && a == 57)
					 {
					 	break;
					 }
					 putchar(',');
					 putchar(' ');
				}
				 a++;
			 }
			 i++;
		 }
		 e++;
	}
	putchar('\n');
	return (0);
}

