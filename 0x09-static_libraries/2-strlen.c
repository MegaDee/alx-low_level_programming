#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
