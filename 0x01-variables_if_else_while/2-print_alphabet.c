#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putc(n, stdout);
		n++;
	}
	putc("\n");
	return (0);
}

