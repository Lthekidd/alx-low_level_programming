#include "main.h"

/**
 * _isalpha - check if c is lower.
 * @c : character the code is going to check
 * Return: 1 or 0 .
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
