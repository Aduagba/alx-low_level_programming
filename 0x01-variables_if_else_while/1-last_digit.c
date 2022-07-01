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
last_no = n % 10;
if (n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last_no);
if (n == 0)
	printf("Last digit of %d is %d and is 0\n", n, last_no);
if (n < 6 && n != 0)
	printf("Last digit of %d is 5d and less than 6 not 0\n", n, last_no);
return (0);
}
