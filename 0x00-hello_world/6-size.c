#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	double d;
	long double e;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long) sizeof(double));
	printf("Size of a long long int; %lu byte(s)\n", (signed long) sizeof(int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

