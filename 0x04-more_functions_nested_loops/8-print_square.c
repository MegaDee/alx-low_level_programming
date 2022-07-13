#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: size of both width and length
 * Return: void
 */

void print_square(int size)
{
	int y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y <=size; y++)
		{
			_putchar('#');
			for (z = 2; z <= size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
