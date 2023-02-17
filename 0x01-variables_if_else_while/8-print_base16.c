#include <stdio.h>

/**
 * main - prints number in base 16 followed by a new line
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
			int j;

			for (j = 97; j <= 102; j++)
				putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
