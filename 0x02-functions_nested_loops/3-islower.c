#include "main.h"

/**
 * _islower - print lowercase of c
 * @c: the integer value
 * Return: 1 if true and 0 if not
 */

int _islower(int c)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			return (1);
		}
		{
			return (0);
		}
	}
}