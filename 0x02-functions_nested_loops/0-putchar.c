#include "_putchar.c"
/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 *
 */
int main(void)
{
	char c[10] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
