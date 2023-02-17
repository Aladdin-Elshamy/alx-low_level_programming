#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{

		if (i < 10)
			putchar (0);
		else if (i % 10 == i / 10)
			continue;
		else if (i % 10 == 0)
			continue;
		putchar (i);
		if (i % 10 == 0)
			break;
		putchar (',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
