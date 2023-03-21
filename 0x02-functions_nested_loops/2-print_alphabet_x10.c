#include "main.h"

/**
   * print_alphabet_x10 - print alphabnet 10 times.
   */
void print_alphabet_x10(void)
{
	char ch;

	int n;

	n = 0;
	ch = 'a';

	for (n <= 10)
	{
		while (ch <= 'z')
			_putchar(ch);
			ch++;
		a++;
	}
	_putchar('\n');
}
