#include <stdio.h>

/**
 * main- Entry main
 * Return: always 0
*/

int main(void)
{
	int intType;
	float floatType;
	long long longlongType;
	long longType;
	char charType;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
