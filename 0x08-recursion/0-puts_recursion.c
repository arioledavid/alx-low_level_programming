#include "holberton.h"

/**
 * _puts_recursion - print string with new line 
 * @s: string to print 
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putschar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
