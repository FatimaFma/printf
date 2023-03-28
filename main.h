#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* struct convert - defines a structure for symbols and functions
* @op: The operator
* @f: The function associated
*/

typedef  struct convert
{
char *op;
int (*f)(va_list);
} conver_t;

/*functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int  _putchar(char c);
int print_integer(va_list list);
int print_number(va_list args);
int print_binary(va_list);

/*helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
int print_reversed(va_list arg);
#endif
