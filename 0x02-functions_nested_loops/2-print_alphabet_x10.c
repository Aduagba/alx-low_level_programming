#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets in lowercases ten times.
 * Return: 0 - SUCCESS
 */

void print_alphabet_x10(void)
{
char alpha;
int no = 0;
while (no < 10)
{
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar(10);
no++;
}
}
