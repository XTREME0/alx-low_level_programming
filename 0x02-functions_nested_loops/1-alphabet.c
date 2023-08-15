#include "_putchar.c";

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0 on success
 *
 */
int print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar((char)i);
	}
	_putchar('\n');
	return (0);
}
