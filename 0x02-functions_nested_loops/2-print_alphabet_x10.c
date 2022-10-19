#include <main.h>

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/

void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	while (a++ <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);

		_putchar('\n');
	}
}
