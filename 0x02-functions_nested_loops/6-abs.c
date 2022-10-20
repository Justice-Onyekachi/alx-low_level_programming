#include "main.h"

/**
 * _abs - Entry point
 * @int: n is an integer
 * Description: prints the absolute value of an integer
 * Return: The absolute value of the integer.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
