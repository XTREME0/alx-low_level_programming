#include "main.h"
#include <string.h>
/**
 *  print_chessboard- prints a chessboard duuh!
 *
 *@a: board table
 * Return: nothing
 *
 */
void print_chessboard(char (*a)[8])
{
	 int i = 0;
	 int j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
