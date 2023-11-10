#include "lists.h"
#include <unistd.h>
/**
 * delete_dnodeint_at_index - delete node at index
 *@head: head
 *@index: index
 * Return: 1 on success
 *
 */
int main(int argc, char **argv)
{
	int x = argc;
	char username[100];
	char cmd[200] = "./crackme5";
	char key[100];

	x++;
	strcpy(key, "hehehe");
	strcpy(username, argv[1]);
	strcat(cmd, " ");
	strcat(cmd, username);
	execve(cmd, argv, NULL);
	printf("yeey\n");
	return (0);
}
