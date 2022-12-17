#include "main.h"
/**
 * print_most_numbers - prints number 0 through 9 but excledes 2 and 4
 *
 * Return: 0 to 9, excluding 2 and 4 then a new line.
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
