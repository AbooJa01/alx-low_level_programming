#include <stdio.h>

/**
 * main - Entry point
 * Owner: AbooJa01
 * Return: 0
 */

int main(void)
{
	int A;

	for (A = 48; A < 58; A++)
	{
		putchar(A);
		if (A != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
