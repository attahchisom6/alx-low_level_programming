#include "main.h"
#include <stdio.h>

/**
 * string_toupper - A function that conver lower
 * cases to upper case
 * @lwr:lowercase to uppercase
 * Return:the result of the change
 */

char *string_toupper(char *lwr)
{
	int p;

	for (p = 0; lwr[p] != '\0'; p++)
	{
		if (lwr[p] >= 'a' && lwr[p] <= 'z')
		{
			lwr[p] = lwr[p] - 32;
		}
	}
	return (lwr);
}
