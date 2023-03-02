#include <stdio.h>

/**
 * Program to calculate call rate
 * I just did it with if/else statement because there was no specification
 * If there is any, get back to me
 * I will work on the 1c prject later 
 * am in class
 */

int main(void)
{
	int duration, rate = 0;
	printf("Please enter the duration in seconds\n");
	scanf("%d", &duration);
	
	if (duration <= 0)
	{
		printf("Please enter a number greater than Zero\n");
		return (0);
	}
	else if (duration >= 721)
	{
		rate = (10 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	else if (duration >= 361 && duration <= 760)
	{
		rate = (12 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	else if (duration >= 181 && duration <= 360)
	{
		rate = (15 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	else if (duration >= 121 && duration <= 180)
	{
		rate = (18 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}
	else if (duration <= 120)
	{
		rate = (20 * duration);
		printf("The rate of your call is %dk\n", rate);
		return (0);
	}

	return (0);
}
		 
