#include <stdio.h>
/**
 * main - entry
 * Return: 0 always
 */
int main(void)
{
char alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar(10);
return (0);
}
