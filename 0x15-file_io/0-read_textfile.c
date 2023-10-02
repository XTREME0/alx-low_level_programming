#include "main.h"
#include <math.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: the file
 *@letters: num of letters to read
 * Return: int
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	int chr, c;

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
		return (0);
	chr = getc(f);
	c = 0;

	while (chr != EOF && letters != 0)
	{
		putchar(chr);
		letters--;
		c++;
		chr = getc(f);
	}
	fclose(f);
	return (c);

}
