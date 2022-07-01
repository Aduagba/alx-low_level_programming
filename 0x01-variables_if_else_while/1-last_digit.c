#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - printout  the value of n if program is executed
 *Return: always 0
 */
int main(void)
{

int n, last_no;
srand(time(0));

n = rand() - RAND_MAX / 2;
last_no = n % 10;
if (last_no > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last_no);
else if (last_no == 0)
	printf("Last digit of %d is %d and is 0\n", n, last_no);
else
	printf("Last digit of %d is %d and less than 6 not 0\n", n, last_no);
return (0);
}
