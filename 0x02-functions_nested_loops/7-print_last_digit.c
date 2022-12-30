#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: The number to be printed
 * Return: the last digit value to be printed
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
