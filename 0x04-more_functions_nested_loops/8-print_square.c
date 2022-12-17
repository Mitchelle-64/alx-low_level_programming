#include "main.h"

/**
 * print_square - a function that prints a square, follwed by a new line
 * @size: of both width and lenght
 * Return: no return
 */

void print_square(int size)
{
	int col, row;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (col = 1 ; col <= size; col++)
		{
			_putchar('#');
			for (row = 1 ; row <= size; row++)
			{
				_putchar('#');
			}
		}
			_putchar('\n');
	}
}
