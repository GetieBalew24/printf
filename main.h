#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);


/**
 * struct format - match the conversion specifiers
 * @id: type char pointer
 * @f: type pointer to function
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int printf_string(va_list val);
int printf_char(va_list val);
int printf_37(void);
int _strlen(char *str);
int _strlenc(const char *str);
int printf_dec(va_list arg);
int printf_int(va_list arg);
int printf_bin(va_list val);
int print_unsigned(va_list u);
int print_octal(va_list o);
int print_hex(unsigned int n, unsigned int c);
int print_x(va_list x);
int print_X(va_list X);
#endif
