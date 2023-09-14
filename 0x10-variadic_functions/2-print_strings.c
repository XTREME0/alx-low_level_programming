#include "variadic_functions.h"
/**
 * print_strings - print strings paseed as parameters
 *@separator: the separator
 *@n: number of strings passed
 * Return: nothing
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		if (p != NULL)
		{
			printf("%s", va_arg(p, char *));
		} else
		{
			printf("(nil)");
		}
		if (i != (n - 1))
			printf("%s", sep);
	}
	printf("\n");
	va_end(p);
	free(sep);
}
