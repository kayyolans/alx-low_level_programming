#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(int));
	printf("Size of a double: %lu byte(s)\n", sizeof(double));
	printf("Size of a long int: %lu byte(s)\n", sizeof(char));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(float));
	return (0);
}

