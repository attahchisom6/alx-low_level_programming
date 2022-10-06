#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - funtion to measure the lengt of string
 * @str:string to measure
 *
 * return:lengt of string
 */

int _strlen(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * string_nconcat - this function will concertenate a
 * number of strings
 * @s1:destination string
 * @s2:source string to be concertenated with s1
 *
 * Return:pointer to concertenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, g, m = 0, p, x;
	char *buffer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = _strlen(s1);
	while (s2[m] != '\0' && m < n)
	{
		k = _strlen(&s2[m]);
		m++;
	}
	g = p + k + 1; /*to include the null terminator*/
	buffer = malloc(g * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		buffer[x] = s1[x];
	for (m = 0; m < n && s2[m] != '\0'; m++, x++)
		buffer[x] = s2[m];
	buffer[x] = '\0';
	return (buffer);
}
