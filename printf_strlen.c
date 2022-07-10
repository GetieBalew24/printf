#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 * @str: Type char pointer
 * Return: c.
 */

int _strlen(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
		;
	return (c);
}

/**
 * _strlenc - Strlen function but applied for constant char pointer str
 * @str: Type char pointer
 * Return: c
 */

int _strlenc(const char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
		;
	return (c);
}
