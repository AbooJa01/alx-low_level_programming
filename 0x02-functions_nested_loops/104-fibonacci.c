#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
* AbooJa01
*
* Return: Null
**/

int main(void)

{
	int count;
	unsigned long a = 0, b = 1, sum;
/* a & b are First and Second Fibonacci numbers respectively*/
	unsigned long a1, a2, b1, b2;
	unsigned long ab1, ab2;

	for (count = 0; count < 92; count++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}

	a1 = a / 10000000000;
	a2 = a % 10000000000;
	b1 = b / 10000000000;
	b2 = b % 10000000000;

	for (count = 93; count < 99; count++)
	{
		ab1 = a1 + b1;
		ab2 = a2 + b2;
		if (ab2 > 9999999999)
		{
			ab1 += 1;
			ab2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		a1 = b1;
		a2 = b2;
		b1 = ab1;
		b2 = ab2;
	}
	printf("\n");
	return (0);
}
