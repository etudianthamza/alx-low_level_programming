#include "main.h"
#include "math.h"

/**
 * calculate_square - function for help us to determinat sqrt
 * @n: the integer
 * @guess : the guess integer
 * Return: Always 0 (Success)
 *
*/

int calculate_square(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer
 *
 * Return: Always 0 (Success)
 *
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (calculate_square(n, 2));
}
