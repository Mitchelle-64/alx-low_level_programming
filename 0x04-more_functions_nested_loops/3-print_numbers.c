#include "main.h"
/**
 *print_number - prints the digits 1-9
 */

void print_number(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
