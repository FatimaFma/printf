#include "main.h"

/**
* print_number - prints a number
* @args: List of arguments
*
* Return: int
*/

int print_number(va_list args)
{
	int n;
	int d = 1;
	int length = 0;
	unsigned int num;

	n = va_arg(args, int);
	if (n < 0)
	{
		length += _write_char('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / d > 9; )
		d *= 10;
	for (; d != 0; )
	{
		length += _write_char('0' + num / d);
		num %= d;
		d /= 10;
	}
	return (length);
}

/**
* print_integer - Prints an integer
* @list: list of arguments
*
* Return: int.
*/
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
