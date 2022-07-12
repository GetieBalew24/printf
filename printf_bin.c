#include "main.h"

/**
 * printf_bin - prints binery format
 * @val: argument
 * Return: the binery value
 */

int printf_bin(va_list val)
{
	int flag = 0, cont = 0, i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int), p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - 1);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
