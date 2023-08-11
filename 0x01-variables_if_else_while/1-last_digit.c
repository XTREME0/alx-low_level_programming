#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n, l, last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char str[12];
	char b[12];

	sprintf(str, "%d", n);
	l = strlen(str);
	b[0] = str[strlen(str) - 1];
	b[1] = '\0';
	last_num = strtol(b, NULL, 10);
	/* sscanf(b, "%d", &last_num);*/
	if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	} else
	{
		if (last_num < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, last_num);
		} else
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
		}
	}
	return (0);
}
