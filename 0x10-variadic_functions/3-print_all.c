#include "variadic_functions.h"
/**
 * print_all - print parameter paseed to it
 *@format: the value passed
 * Return: nothing
 *
 */
void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i;
	char *sep;

	sep = malloc(3);
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
