#include "main.h"

/**
 * printf_char - prints a char
 * @val: value argument
 * Return: return 1
 */

int printf_char(va_list val)
{
	char ch;

	ch = va_arg(val, int);
	_putchar(ch);
	return (1);
}
