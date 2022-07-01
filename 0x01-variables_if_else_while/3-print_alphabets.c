#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
char lower = 'a', upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar(10);
return (0);
}

