#include "holberton.h"

/**
 * Main - print the word "Holberton"
 *
 * Return 0
 */

int main()
{
	int i;
	char p[] = "Holberton";

	for(i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
