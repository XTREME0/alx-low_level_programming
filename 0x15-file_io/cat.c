#include "main.h"
#include <math.h>
/**
 * main - read elf file
 *@ac: number of parameters
 *@av: files passed as parameter
 * Return: 0 on success
 *
 */
int main(int ac, char **av)
{
	int f;
	char elf_file[50], buffer[1024];
	ssize_t br;

	strcpy(elf_file, av[1]);
	if (ac != 2)
		exit(-1);
	f = open(elf_file, O_RDONLY);
	if (f == -1)
		exit(-1);
	while ((br = read(f, buffer, sizeof(buffer))) > 0)
	{
		printf("%s", buffer);
	}
	close(f);
	return (0);
}
