#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C progresse that prints with put function
 *
 * Return: Alawys 0 (Succes)
*/
int main(void)
{
	int i ;
	long int d;
	char c;
	float t;
	long long int y;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(t));
	return (0);
}
