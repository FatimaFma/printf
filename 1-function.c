#include "main.h"

/**
* print_number - prints a number
* @args: List of arguments
*
* Return: int
*/

int print_number(va_list args)
{
	unsigned int n;
	int i = 0;
	int j = 0;
	int num = 0;
	int count = 0;

	num = va_arg(list, int);
	if (num <= INT_MAX && num >= INT_MIN)
	{
		if (num < 0)
		{
			num *= -1;
			_putchar('-');
			count += 1;
		}
		n = num;
		for (j = 0; (n / 10) > 0; j++)
			n /= 10;

		n = num;
		while (j != 0)
		{
			for (i = 0; i < j; i++)
				n /= 10;
			n %= 10;
			_putchar(n + '0');
			count++;
			j--;
			n = num;
		}
		_putchar(n % 10 + '0');
		count++;
	}
	else
	{
		return (-1);
	}
	return (count);
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
