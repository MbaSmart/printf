#include "main.h"
#include <stdarg.h>

/**
* _puts - prints a string.
* @str: the string to passed in.
*
* Return: the number of character.
*/
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
* _print_string - this calls the puts.
* @args: the argument list
*
* Return: the number of character.
*/
int _print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
