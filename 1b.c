#include <stdio.h>

/**
 * Program to calculate call rate
 *
 */

int main(void)
{
	int duration, rate = 0;
	printf("Please enter the duration in seconds\n");
	scanf("%d", &duration);
	
	if (duration >= 721)
	{
		rate = (10 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	if (duration >= 361 && duration <= 760)
	{
		rate = (12 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	if (duration >= 181 && duration <= 360)
	{
		rate = (15 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	if (duration >= 121 && duration <= 180)
	{
		rate = (18 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	if (duration <= 120)
	{
		rate = (20 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	if (duration  < 0)
		return (0);
}
		 
