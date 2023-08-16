#include "main.h"

/**
 * printit - writes the character c using _putchar
 * @c: The character to print
 *
 * Return: On success 1.
 *
 */
void printit(int c)
{
    if ((c / 100) > 0)
		{
			putchar('0' + (c / 100));
			putchar('0' + ((c / 10) % 10));
			putchar('0' + (c % 10));

		} else
		{
			if ((c / 10) > 0)
			{
				putchar('0' + (c / 10));
				putchar('0' + (c % 10));
			} else
			{
			 	putchar('0' + c);
			}
		}
}
/**
 * print_to_98 - writes numbers from n to 98
 * @c: where to start
 *
 * Return: nothing
 * 
 */
void print_to_98(int c)
{
	int sw = 0;

	while (c != 99)
	{
	    while (c > 98)
	    {
	        printit(c);
	        putchar(',');
			putchar(' ');
	        c--;
	        
	    }
		if (c < 0)
		{
			c = -c;
			sw = 1;
			putchar('-');
		}

		printit(c);
		if (c != 98)
		{
			putchar(',');
			putchar(' ');
		} else
		{
			if (sw == 0)
			{
				putchar('\n');
			}
		}
		if (sw == 0)
		{
			c++;
		} else
		{
			if (c == 98)
			{
				putchar(',');
                putchar(' ');
			}
			c--;
			c = -c;
			sw = 0;
		}
	}
}
