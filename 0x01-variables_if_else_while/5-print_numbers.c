#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Print numbers from 0 to 9
 * starting from 0, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
