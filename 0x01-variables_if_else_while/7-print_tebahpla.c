#include <stdio.h>

/**
 * main - Entry point
 * Owner: AbooJA
 * Return: 0
 */

int main(void)
{
	char S;

	for (S = 'z'; S >= 'a'; S--)
		putchar(S);
	putchar('\n');
	return (0);
}
