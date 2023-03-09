#include "main.h"
int isPrime(int num, int i);

/**
 * is_prime_number - A function that returns 1
 * if the input integer is a prime number.
 * @n: input number
 * Return: returns 1 if the input is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (isPrime(n, n / 2));
}

/**
 * isPrime - checks if the input modulus i == 0
 * if not calls the recursive function
 * @num: input number
 * @i: num / 2
 * Return: returns 1 if the input is a prime number, else 0
 */

int isPrime(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if ((num % i) == 0)
			return (0);

		isPrime(num, i - 1);
	}
}
