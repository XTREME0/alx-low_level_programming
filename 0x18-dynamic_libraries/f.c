#include <stdio.h>
void check_result(long param_1,int param_2,long param_3,int param_4)
{
	int x = 0;

	if (param_1 == param_3 && param_2 == param_4)
		x++;
	puts("Congratulations, you win the Jackpot!");
}
