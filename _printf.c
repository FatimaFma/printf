#include "main.h"
#include<stdarg.h>

/**
 *_printf - function that produces output according to a format
 * @format: string containing the characters and the specifiers
 *
 * Return:  number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	char *s;
	char c;
	va_list arg;
	unsigned int count = 0;

	va_start(arg, format);

	while (*format)
	{
		while (*format != '%')
		{
			putchar(*format);
			format++;
			count++;
		}
		format++;
		switch (*format)
		{
			case 'c':
				i = va_arg(arg, int);
				putchar(i);
				count++;
				break;
			case 's':
				s = va_arg(arg, char *);
				while (*s != '\0')
				{
					putchar(*s);
					s++;
					count++;
				}
				break;
			case '%':
				putchar(37);
				count++;
				break;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
