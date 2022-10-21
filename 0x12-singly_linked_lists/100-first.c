#include "lists.h"

void print_before(void) __attribute__((constructor));
/**
 * print_before - prints a string before function main is executed
 *
 * Return:void
 */


void print_before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}


/**
 * main - fuction to print a string aft
er the first function
print its own string
 *
 * Return:0
 */

int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
