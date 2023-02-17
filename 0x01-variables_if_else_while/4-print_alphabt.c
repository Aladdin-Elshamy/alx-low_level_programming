#include <stdio.h>

/**
 * main - print all the letters except q and e
 * Return: Always 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;

		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
