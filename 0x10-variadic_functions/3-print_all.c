#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - this function will print all forms of data types
 * passed to it
 * @format:point to all form of data types
 *
 * Return:void
 */

void print_all(const char * const format, ...)
{
	unsigned int k, p = 0, flag = 0;
	const char buffer[] = "cifs";
	char *str;
	va_list all;

	va_start(all, format);
	while (format != NULL && format[p] != '\0')
	{
		k = 0;
		while (buffer[k] != '\0')
		{
			if (format[p] == buffer[k] && flag != 0)
			{
				printf(", ");
				break;
			} k++;
		}
		switch (format[p])
		{
		case 'c':
			printf("%c", va_arg(all, int)), flag = 1; /*promote float to double*/
			break;
		case 'i':
			printf("%d", va_arg(all, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(all, double)), flag = 1;
			break;
		case 's':
			str = va_arg(all, char *), flag = 1;
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} p++;
	}
	printf("\n"), va_end(all);
}
