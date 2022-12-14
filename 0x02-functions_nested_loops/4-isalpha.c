#include "main.h"

/**
 * _isalpha - Check for alphabet
 * @c: input character
 * Return: 1 if alphabet, otherwise 0
 */

int _isalpha(int c)
{
	char la_up, la_low;
	int isAlpha = 0;

	for (la_up = 'A'; la_up <= 'Z'; la_up++)
	{
		for (la_low = 'a'; la_low = 'z'; la_low++)
		{
			if (c == la_low || c == la_up)
				isAlpha = 1;
		}
	}
	return (isAlpha);
}
