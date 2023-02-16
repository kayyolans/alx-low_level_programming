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

	printf("This is the size of an int: %lu.\n", sizeof(i));
	printf("this is the size of a double: %lu.\n", sizeof(d));
	printf("This is the size of a character: %lu.\n", sizeof(c));
	return (0);
}

