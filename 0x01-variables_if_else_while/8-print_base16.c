#include <stdio.h>

/**
 * main - Entry point
 * Owner: AbooJa
 * Return:0
 */

int main(void)

{
	int S;
	char A;

	for (S = 48; S < 58; S++)
		putchar(S);
	for (A = 'a'; A <= 'f'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
