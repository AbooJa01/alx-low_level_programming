#include <stdio.h>

/**
 * main - Entry point
 * Owner: AbooJa01
 * Return: 0
*/

int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		if (A != 'q' && A != 'e')
			putchar(A);
	}
	putchar('\n');
	return (0);
}
