#include "holberton.h"
/**
 * _strlen_recursion - string length
 * @s: input string
 * Return: string lengt
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * p_compare - check if string is palindrome
 * @str: input string
 * @beg: first string postion
 * @end: last string postion
 * Return: 1 if true, 0 for false
 */
int p_compare(char *str, int beg, int end)
{
	if (beg >= end)
		return (1);
	if (str[beg] != str[end])
		return (0);
	return (p_compare(str, beg + 1, end - 1));
}
/**
 * is_palindrome - get length and pass to pal_check
 * @s: string to check
 * Return: 1 for yes, 0 for false
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length == 0)
		return (1);
	return (p_compare(s, 0, length - 1));
}
