#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
int no = 0;
while (no < 10)
{
putchar(no + '0');
no++;
}
putchar(10);
return (0);
}
