#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @a: The integer to be considered
 * Return: 0 - SUCCESS
 */
int print_last_digit(int a)
{
int res;
if (a >= 0)
{
res = a % 10;
_putchar(res + '0');
}
else
{
res = (-1 * (a % 10));
_putchar(res + '0');
}
return (res);
}
