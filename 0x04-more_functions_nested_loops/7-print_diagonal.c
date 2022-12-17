#include "main.h"

/**
 * print_diagonal - a function that drayws diagonal lines on the terminal
 * @n: input the number of times '\' should be printed
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int col, row;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (col = 1 ; col <= n; col++)
		{
			for (row = 1; row < col; row++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
