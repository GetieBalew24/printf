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

#endif
