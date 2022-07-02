#include <stdio.h>
/**
 * main - Print numbers between 0 to 9 and letters between a to f
 * Return: 0 (Success)
 */
int main(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar (y);
	}
	putchar ('\n');
	return (0);
}
