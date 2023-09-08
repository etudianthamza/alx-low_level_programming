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
	printf("The size of an int is : %lu bytes.\n", (unsigned long)sizeof(i));
	printf("The size of a float is : %lu bytes.\n", (unsigned long)sizeof(t));
	printf("The size of an long int is : %lu bytes.\n", (unsigned long)sizeof(d));
	printf("The size of an char is : %lu bytes.\n", (unsigned long)sizeof(c));
	printf("The size of an long long int is : %lu bytes.\n", (unsigned long)sizeof(y));
	return (0);
}
