#include "holberton.h"

/**
 * main - prints out alphabet in lower case
 *
 * Return: Returns 0(success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
