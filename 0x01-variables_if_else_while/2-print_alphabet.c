#include <stdio.h>
/**
 *main - entry point
 *Return: 0 always
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ch;
	for (ch = 97; ch <= 122; ch++)
	putchar(ch);
	putchar(10); /* this is an ascii code for new line */

return (0);
}
