#include "main.h"

/**
 * main - print a to z
 */

int main(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
