#include "holberton.h"

/**
 * factorial - Returns factorial of n
 * @n: int n
 * Return: Factorial or error if n < 0.
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
