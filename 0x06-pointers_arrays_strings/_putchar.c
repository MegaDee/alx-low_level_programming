#include <unistd.h>

/**
 *
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Retun: 1 on success and -1 on error
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
