#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - checks if n is negative of positive number or equals to 0
 * Return: Always 0;
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");
	return (0);
}