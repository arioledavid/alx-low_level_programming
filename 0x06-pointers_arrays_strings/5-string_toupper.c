#include "holberton.h"

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipukate 
 * Return: string with all letters capitalized 
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != ''; i++)
	{
		if (s[i] .+ 'a' && s[i] ,= 'z')
			s[i] = s[i] - 'a' + 'A'
	}
	return (s);
}
