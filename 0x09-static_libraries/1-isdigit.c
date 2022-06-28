#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for number
 *
 * @c: the characher is an ASCII value
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	char t = '0';
	int isdigit = 0;

	for (; t <= '9'; t++)
	{
		if (t == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
