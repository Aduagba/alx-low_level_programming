#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 - always
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar(10);
return (0);
}
