#include <stdio.h>

/**
 * main - prints out the fibonacci first 50 numbers 
 * Return: 0 success
 */

int main(void)
{
	int count;
	int a = 1;
	int b = 2;

	for (count == 0; count <= 48; count++)
	{
		printf("%i, %i", a, b);
		
		while(count <= 48)
		{
			b += a;
			printf(", %i", b);
		}
	}
	return 0;
}
