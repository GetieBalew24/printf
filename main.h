#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdarg.h>

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
#endif
