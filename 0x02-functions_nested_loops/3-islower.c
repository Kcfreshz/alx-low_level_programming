#include "main.h"

/**
 * _islower - check for alphabets lower case
 * @c: input character
 * Return: 1 if lowercase, otherwise 0
 */

int _islower(int c)
{
	char la;
	int islow = 0;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la == c)
		{
			islow = 1;
		}
	}
	return (islow);
}

