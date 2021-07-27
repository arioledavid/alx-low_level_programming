#include <stdio.h>

/**
 * main - print sum of even fibonacci sequence up to 4,000,000
 * Return:0 success
 */

int main(void)
{
	int sumevens = 0;
	int a;
	int b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sumevens += sum;
	}
	printf("%d\n", sumevens);

	return (0);
}
