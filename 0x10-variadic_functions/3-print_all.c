#include "variadic_functions.h"
#include "stdio.h"
#include <stdarg.h>

/**
 * print_all - A function that prints anything.
 * @format: A list of types of arguments passed
 * to the function
 */


void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(args);
}
