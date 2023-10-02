#include "main.h"
#include <math.h>
/**
 * create_file - create a text file and write to it
 *@filename: the file
 *@text_content: num of letters to read
 * Return: int
 *
 */
int create_file(const char *filename, char *text_content)
{
	int f, e;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT, 0644);
	if (f == -1)
		return (-1);

	e = write(f, text_content, strlen(text_content));
	if (e == -1)
		return (-1);
	close(f);
	return (1);

}
