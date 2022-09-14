#include <stdio.h>

/**
* main - Prints the sum of even-valued Fibonacci sequence.
* AbooJa01
* Return: Null
**/

int main(void)
{
	unsigned long a = 0, b = 1, sum;
/* a & b are First and Second Fibonacci respectively*/
	float tot_sum;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tot_sum += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
