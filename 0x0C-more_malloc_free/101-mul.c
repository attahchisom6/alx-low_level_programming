#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isNumeral - A fuction that checks if a string is a number
 * or not
 * @argv:string to check
 *
 * Return:0
 */

int isNumeral(char *argv)
{
	int k;

	for (k = 0; argv[k]; k++)
		if (argv[k] < 48 || argv[k] > 57)
			return (1);
	return (0);
}

/**
 * _calloc - allocate memory to an array
 * @memb:elements of the array
 * @size:size of the array
 *
 * Return:pointer to the array
 */
void *_calloc(unsigned int memb, unsigned int size)
{
	char *buffer;
	unsigned int k;

	buffer = malloc(size * memb);
	if (buffer == NULL)
		return (NULL);

	for (k = 0; k < (size * memb); k++)
		buffer[k] = 0;

	return (buffer);
}

/**
 * mul_array -function to mutiply arrays
 * @a1:array1
 * @len1:lenght of a1
 * @a2:a character type data
 * @a3:array for result
 * @lena:lenght of array a3
 *
 * Return:pointer to result
 */

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, k, p;

	k = lena;
	for (p = len1 - 1; p >= 0; p--)
	{
		mul += (a1[p] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

	while (mul != 0)
	{
		mul += a3[k] - '0';
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

	return (a3);
}

/**
 * print_array - function to print elents of an array
 * @arr:array of elements
 * @n:number of elements of the array
 *
 * Return:void
 */

void print_array(char *arr, int n)
{
	int k;

	while (arr[k] == '0' && (k + 1) < n)
	{
		k++;
	}
	for (; k < n; k++)
	{
		putchar(arr[k]);
	}
	putchar('\n');
}

/**
 * main - function to get the multiplucation of two numbers
 * @argv:array containing mutiplying number
 * @argc:Number of the arguments
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int k, c, len1, len2, result;
	char *mul_table;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};

	if (argc != 3 || isNumeral(argv[1]) == 1 || isNumeral(argv[2]) == 1)
	{
		for (k = 0; k < 6; k++)
		{
			putchar(E[k]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	result = len1 + len2;
	mul_table = _calloc(result, sizeof(int));
	if (mul_table == NULL)
	{
		free(mul_table);
		return (0);
	}
	for (k = len2 - 1, c = 0; k >= 0; k--)
	{
	mul_table = mul_array(argv[1], len1, argv[2][k], mul_table, (result - 1 - c));
	c++;
	}
	print_array(mul_table, result);
	free(mul_table);
	exit(EXIT_SUCCESS);
	return (0);
}
