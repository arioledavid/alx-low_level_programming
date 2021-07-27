#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 for success
 */

int main(void)
{
	char acharacter;
	int aninteger;
	long along;
	long long alongs;
	float afloat;
	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(aninteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alongs));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
