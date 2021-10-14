#include "holberton.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 *
 * Return: empty
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
