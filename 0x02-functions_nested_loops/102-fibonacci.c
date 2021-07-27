#include <stdio.h>

/**
 * main - print the first 50 numbers of the fibonacci sequence
 * Return: 0 for success
 */

int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else if (j = 20365011074)
		{
			printf("%ld, ", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
