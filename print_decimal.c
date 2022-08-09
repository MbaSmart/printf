#include "main.h"

/**
 * print_decimal - print negative and positive numbers
 * * @value: value
 * Return: count characters
 */
int print_decimal(int value)
{
	int count = 0;

    /* print '-' for negative numbers */
	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}
	/* Using Recursion */
	/* First check if the value is divisible by 10 */
	/* if yes, add count to the whole number until it is not*/
	/* then update with _putchar returning the remainder of the value*/
	/*  as a character by concatenating with '0' */
	if (value / 10)
		count += print_decimal(value / 10);

	count += _putchar(value % 10 + '0');
	return (count);
}
