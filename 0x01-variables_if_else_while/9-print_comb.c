#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0
 */

int main(void)
{
	int i;
	bool first_time = true;

	for (i = 0; i <= 9; i++)
	{
		if (!first_time)
		{
			putchar(i + 48);
			break;
		}
		putchar(i + 48);
		putchar(',');
		putchar(' ')'
		if (i == 8)
			first_time = false;
	}
	return (0);
}
