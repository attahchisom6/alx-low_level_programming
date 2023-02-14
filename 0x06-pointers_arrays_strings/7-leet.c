#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes or replaces
 * lettets with numbers in 1337
 * @s:string to be encoded
 * Return:string s
 */

char *leet(char *s)
{
	int k, p;

	char *m = "aAeEoOtTlL";
	char *n = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (p = 0; p < 10; p++)
		{
			if (s[k] == m[p])
			{
				s[k] = n[p];
			}
		}
	}
	return (s);
}
