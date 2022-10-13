#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcode of the user
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:0
 */

int main(int argc, char **argv)
{
	int k = 0, nbytes; /*nbytes = number of bytes*/
	char *buffer;

	k = 0, buffer = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (k < nbytes)
	{
		if (k == (nbytes - 1))
		{
			printf("%02x\n", buffer[k]);
			 break;
		}
		printf("%02x ", buffer[k]);
		k++;
	}
	return (0);
}