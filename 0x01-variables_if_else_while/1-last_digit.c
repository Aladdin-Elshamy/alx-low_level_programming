#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/*
 * main - determine wether the last digit of n is 0 , greater than 5, less than 6 and not 0
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n%10);
	/* your code goes there */
	return (0);
}
