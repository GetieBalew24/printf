#include "main.h"
#include <stdlib.h>
/**
 * print_octal-prints an octal number.
 * @o: unsigned to be converted
 * Return: size the output
 */

int print_octal(va_list o)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(o, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (counter);
}
