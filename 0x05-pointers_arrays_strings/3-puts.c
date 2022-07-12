#include "main.h"

/**
 * _puts - puts a string
 * @str: string function
 * Return: length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
