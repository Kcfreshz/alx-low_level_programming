#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers.
 *
 * Return: Always 0(success)
 *
 */
int main(void)

{

	int num = '0';


	while (num <= '9')
	{


		putchar(num);

		if (num != '9')

		{

			putchar(',');

			putchar(' ');
		}
		num++;

		putchar('\n');

		return (0);
}
