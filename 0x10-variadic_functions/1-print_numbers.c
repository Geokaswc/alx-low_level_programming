#include "variadic_functions.h"

/**
 * print_numbers - prints nos followed by NL.
 * @separator: the string to be printed between nos.
 * @n: a variable no of a no to be printed.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
