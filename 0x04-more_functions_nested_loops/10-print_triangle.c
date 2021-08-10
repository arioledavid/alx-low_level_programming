#include "holberton.h"

/**
 * print_triangle - Prints a triandle of squares accotding parameter
 * @size: The size of the squares triangle
 *
 * Return: empty
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (x = 1; x < size; x++)
		{
			for (y = 1; y <= size - i; y++)
			{
				_putchar(32);
			}

			for (z = 1; z <= x; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
