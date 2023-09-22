#include <stdio.h>
#include <stdlib.h>

/**
 * m_fast_af_boi - function that runs before main
 * Return: nothing
 *
 */
void __attribute__ ((constructor)) m_fast_af_boi()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
