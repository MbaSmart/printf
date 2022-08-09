#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i;

	va_list data;

	va_start(data, format);

	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
				/* print the character from the va_arguments */
					count += _putchar(va_arg(data, int));
					break;
				case 'd':
				/* Refer to the print_decimal.c file*/
					count += print_decimal(va_arg(data, int));
					break;
				default:
					break;
			}
			i += 2;
		}
	}
	return (count);
}

