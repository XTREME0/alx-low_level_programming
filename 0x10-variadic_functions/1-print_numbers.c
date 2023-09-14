#include "variadic_functions.h"
/**
 * print_numbers - print numbers paseed as parameters
 *@separator: the separator
 *@n: number
 * Return: nothing
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *sep;

	sep = malloc(sizeof(separator));
	if (n == 0)
		return;
	if (separator == NULL)
		sep = "";
	strcpy(sep, separator);
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != (n - 1))
			printf("%s", sep);
	}
	printf("\n");
	va_end(p);
	free(sep);
}
