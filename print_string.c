#include "main.h"
/**
* _puts - prints a string.
* @str: the string to passed in.
*
* Return: the number of character.
*/
int print_string(char *string)
{
		int count = 0;
		int i = 0;

		for (; string[i] != '\0'; i++)
		{
			count += _putchar(string[i]);
		}
		return (count);
}
