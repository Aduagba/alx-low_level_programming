#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 - Success
 */
int main(void)
{
int no = 0;
while (no < 10)
{
putchar(no + '0');
if (no != 9)
{
putchar(',');
putchar(' ');
}
no++;
}
putchar(10);
return (0);
}
