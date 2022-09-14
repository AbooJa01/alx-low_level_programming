#include "main.h"

/**
* print_last_digit - prints the last digits(k)of any number
* @a: the int value to be acted upon
* AbooJa01
* Return: returns the last digit to calling function
**/

int print_last_digit(int a)
{
	int k = a % 10;

	if (k < 0)
		k *= -1;

	_putchar(k + '0');

	return (k);
}
