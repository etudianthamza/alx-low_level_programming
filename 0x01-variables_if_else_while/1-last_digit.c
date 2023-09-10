#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : the last digit less oor greather then 5
 *
 * Return: 0 (Succes)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 1000000000 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 1000000000);
	}
	else if (n % 1000000000 < 6 && n % 1000000000 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 1000000000);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, n % 1000000000);
	return (0);
}
