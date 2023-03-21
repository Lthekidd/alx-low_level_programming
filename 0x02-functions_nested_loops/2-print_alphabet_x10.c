#include "main.h"

/**
   * print_alphabet_x10 - print alphabnet 10 times.
   */
void print_alphabet_x10(void)
{
	char ch;

	int n;

	n = 0;

	while (n <= 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		n++;
	}
	_putchar('\n');
}
