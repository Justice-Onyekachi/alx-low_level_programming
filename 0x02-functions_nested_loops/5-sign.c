#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the sum to be checked
 * Return: 1 and printd + if n is greater than zero etc
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
