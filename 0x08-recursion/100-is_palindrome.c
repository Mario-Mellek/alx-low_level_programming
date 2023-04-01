#include "main.h"
int is_palindrome(char *s);

/**
 * palindromeChecker - helper to is_palindrome
 * @s: string pointer
 * @start: start index
 * @end: end index
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindromeChecker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	return (palindromeChecker(s, start + 1, end - 1));
}

/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: string pointer
 * Return: 1 if s is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (palindromeChecker(s, 0, len - 1));
}
