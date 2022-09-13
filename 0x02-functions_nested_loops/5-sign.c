#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: the integer value
 * Return: 1 if true and 0 if false
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('-');
		return (1);
	}
}