#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar(' ');
	return (0);
}
