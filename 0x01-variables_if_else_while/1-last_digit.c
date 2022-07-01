#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - printout  the value of n if program is executed
 *Return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is", n);
if (n > 5)
	printf("%d and is greater than 5\n", n % 10);
if (n == 0)
	printf("0\n");
if (n < 6 && n != 0)
	printf("%d and less than 6 not 0\n", n % 10);
return (0);
}
