#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long m, n, o, carry;

	count = 0;
	i = 0;
	j = 1;
	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		o = (m + n) - carry * 1000;
		k = (i + j) + carry;
		m = n;
		n = o;
		i = j;
		j = k;
		if (o >= 100)
			printf("%lu%lu", k, o);
		else
			printf("%lu0%lu", k, o);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
