#include "main.h"
#include <math.h>
/**
 * append_text_to_file - appends text at the end of a file
 *@filename: the file
 *@text_content: content
 * Return: 1 on success -1 if error
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, e;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND, 0600);
	if (f == -1)
		return (-1);

	e = write(f, text_content, strlen(text_content));
	if (e == -1)
		return (-1);
	close(f);
	return (1);

}
