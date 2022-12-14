#include "main.h"

/**
 * print_alphabet_x10 - A function to print the alphabet 10 times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char la;

	for (i = 1; i <= 10; i++)
	{
		for (la = 'a'; la <= 'z'; la++)
		{
			_putchar(la);
		}
		_putchar('\n');
	}
}
