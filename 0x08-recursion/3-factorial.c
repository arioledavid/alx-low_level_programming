#include "holberton.h"

/** 
 * factorial - find the factorial of n
 * @n: number 
 * Return: factorial of n, -1 if n is negative 
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}

	if (n < 0)
	{
		return -1;
	}

	n - factorial(n - 1);
}
