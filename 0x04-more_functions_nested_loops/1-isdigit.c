#include "main.h"
/**
 * _isdigit - checks if the passed digit it between 0 and 9 .
 * @c: input digit.
 * Return: 1 if c is a digit otherwise, returns 0 .
 */

int _isdigit(int c)
{
	if (c >= '0' && c <=  '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
