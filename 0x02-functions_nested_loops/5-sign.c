#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: The integer to be considered
 * Return: 0 - SUCCESS
 */

int print_sign(int n)

{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n == 0)
{
	_putchar('0');
	return (0);
}
	else
{
	_putchar('-');
	return (-1);
}

}
