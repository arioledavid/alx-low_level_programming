#include "holberton.h"

/**
 * main - print out the word "Holberton"
 *
 * Return 0
 */

int main(void)
{
	int i;
	char p[] = "Holberton";

	for(i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar(\n);
	return (0);
}
