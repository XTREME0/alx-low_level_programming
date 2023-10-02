#include "main.h"
#include <math.h>
/**
 * cp - cp file to another file
 *@from: the file to copy from
 *@to: the file to copy to
 * Return: 1 on success -1 if error
 *(const char *from, const char *to)
 */
int main(int ac, char **av)
{
	int f, t, c;
	char from[50], to[50];
	char buffer[1024];
	ssize_t b_r, b_w;

	strcpy(from, av[1]);
	strcpy(to, av[2]);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f = open(from, O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	t = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((b_r = read(f, buffer, sizeof(buffer))) > 0)
	{
		b_w = write(t, buffer, b_r);
		if (b_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
			
	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	exit(1);

}
