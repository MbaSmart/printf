#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d]\n", len);
	_printf("Positive:[%d]\n", 7654321);
	_printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");

	return (0);
}

