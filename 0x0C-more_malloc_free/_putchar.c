#include <unistd.h>

/**
 * _putchar - writes the character c stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
