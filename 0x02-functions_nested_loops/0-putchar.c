#include "main.h"

/**
 * main - prints _putchar followed by a newline
 * Return: Always 0
 */

int main(void)
{
	char *put = "_putchar";


	while (*put)
	{
		_putchar(*put);
		put++;
	}

	return (0);
}
