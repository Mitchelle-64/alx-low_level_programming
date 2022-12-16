#include "main.h"
/**
 * more_numbers - a function that rpitns 10 times the numbers, from 0 to 14
 *
 * Return: 0-14 x10 followed by new line
 */

void more_numbers(void)
{
	int i, tn;

	for (tn = 0 ; tn < 10 ; tn++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i >= 10)
			{
				_putchar(i % 10);
			}
			_putchar('\n');
		}
	}
}

