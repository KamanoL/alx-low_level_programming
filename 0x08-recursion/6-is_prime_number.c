#include "main.h"

int actual_prime(int n, int b);

/**
 * is_prime_number - tells if an integer is a prime number
 * @n: number to be evaluated
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, 2));
}

/**
 * actual_prime -calculates if a number is a prime number recursively
 * @n: number to evaluate
 * @b: iterater
 * Return: 1 if n is a prime number, 0 if not
 */

int actual_prime(int n, int b)
{
	if (b == n)
		return (1);
	if (n % b == 0)
		return (0);
	return (actual_prime(n, b + 1));
}
