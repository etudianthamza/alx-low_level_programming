#include "main.h"
/**
 * is_primer_recirsuve - the function that looks of primer
 *
 * @n: the integer
 * @diviseur: the integer
 * Return: Always 0 (Success)
 *
*/

int is_primer_recirsuve(int n, int diviseur)
{
	if (n % diviseur == 0 || n == 1)
	{
		return (0);
	}
	if (diviseur * diviseur > n)
	{
		return (1);
	}
	return (is_primer_recirsuve(n, diviseur + 1));
}
/**
 * is_prime_number - test if the input integer is a prime number
 *
 * @n: the integer
 *
 * Return: Always 0 (Success)
 *
*/

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (is_primer_recirsuve(n, 2));
}
