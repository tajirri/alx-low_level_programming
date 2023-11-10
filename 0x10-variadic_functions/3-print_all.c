#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int m;
	char *str;
	va_list x;

	va_start(x, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(x, int));
				m = 0;
				break;
			case 'i':
				printf("%i", va_arg(x, int));
				m = 0;
				break;
			case 'f':
				printf("%f", va_arg(x, double));
				m = 0;
				break;
			case 's':
				str = va_arg(x, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				m = 0;
				break;
			default:
				m = 1;
				break;
		}
		if (format[i + 1] != '\0' && m == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(x);
}
