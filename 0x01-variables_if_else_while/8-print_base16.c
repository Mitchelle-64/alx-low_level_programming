#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0 (success)
 *
 */

int main(void)
{
	char num;
	char lett;

	for (num = 0; num <= 9; num++)
{
	putchar(num);
}

	for (lett = 'A'; lett <= 'F'; lett++)
{
	putchar(lett);
}
	putchar('\n');

	return (0);
}
