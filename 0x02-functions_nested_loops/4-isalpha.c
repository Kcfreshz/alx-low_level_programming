#include "main.h"

/**
 * _isalpha - Check for alphabet
 * @c: input character
 * Return: 1 if alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
