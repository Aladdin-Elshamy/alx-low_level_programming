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
		putc("%c", n);
		putc("\n");
		n++
	}
	return (0);
}

