#include <stdio.h>

/**
 * main - main block
 * sum even fibonacci numbers under 4 million
 * Return: Always 0
 */

int main(void)
{
	unsigned long count, i, j, k, add;

	i = add = 0;
	j = 1;

	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			add += k;
		}
	}
	printf("%lu\n", add);
	return (0);
}
