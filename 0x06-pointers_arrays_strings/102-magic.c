#include <stdio.h>

/**
 * main - prints integer followed by a new line
 * Return: void
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/**
	 * code should be written at line 19
	 * you are not allowed to modify p
	 */
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
