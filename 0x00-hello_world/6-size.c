#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the sizes of multiple types
 *
 * Return: Always 0
*/

int main(void)
{
	printf("Size of a char: %1u byte(s)\n", sizeof(char));
	printf("Size of an int: %٦u byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int))
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
