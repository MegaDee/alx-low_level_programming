#include "main.h"

/**
 * time_table - prints the 9 times table
 *
 * Return: Times table
 */
void times_table(void)
{
	int a, b, op;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			op = (a * b);
			if ((op / 10) > 0)
			{
				_putchar((op / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((op % 10) + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
