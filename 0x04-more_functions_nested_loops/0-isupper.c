#include "main.h"
#include <stdio.h>

/**
 * isupper - checks whether the given character is uppercase or not.
 *
 * Return: 1 if c is uppercase, otherwise return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{	
		return (0);
	}
}
