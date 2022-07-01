#include <stdio.h>
/**
 * main - entry
 * Return: always 0
 */
int main(void)
{
char alpha = 'a';
int no = 0;
while (no < 10)
{
putchar(no + '0');
no++;
}
while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar(10);
return (0);
}
