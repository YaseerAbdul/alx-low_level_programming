#include "main.h"

/**
 * print_alphabet - print all alphhabet in lower case
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putcher(letter);

	_putcher('\n');
}
