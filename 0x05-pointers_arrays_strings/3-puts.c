#include "main.h"
/**
 * _puts - puts function
 * @str: _puts parameter
 */
void _puts(char *str)
{
for (*str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
