#include <stdio.h>

/**
 * main - sum of all the multiples of 3 or 5 below 1024 (excluded)
 * AbooJa01
 * Return: Null
**/

int main(void)

{
	int a = 0;
	int sum = 0;

	for (a = 0; a < 1024, a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			sum += a;
	}

	printf("%d\n", sum);

	return (0);
}
