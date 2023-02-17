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
		if (i == 9)
		{
			putchar(i + 48);
			break;
		}
		putchar(i + 48);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
