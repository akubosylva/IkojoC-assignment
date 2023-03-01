#include <stdio.h>
#include <stdlib.h>

/**
 * A program to march student score with respective course
 * 
 */

int main(void)
{
	int score;
	int math_score;
	int physics_score;

	printf("Please enter your Score\n");
	scanf("%d", &score);
	if (score < 160)
	{
		printf("Your score must be 160 or greater\n");
		return (0);
	}
	else
	{
		if (score >= 250)
		{
			printf("Student is eligible for Engineering-based course\n");
			return (0);
		}
		else if (score >= 200)
		{
			printf("Student is eligible for Computer Science\n");
			return (0);
		}
		else if (score >= 180)
		{
			printf("Please enter your Mathematics Score\n");
			scanf("%d", &math_score);
			printf("Please enter your Physics Score\n");
			scanf("%d", &physics_score);

			if (math_score >= 60)
			{
				printf("Student is eligible for Mathematics\n");
				return (0);
			}
			else if (physics_score >= 60)
			{
				printf("Student is eligible for Physics\n");
				return (0);
			}
			else
			{
				printf("Student is eligible for Statistics\n");
				return (0);
			}
		}
		else if (score >= 160)
		{
			printf("Student is eligible for Agricultural-based course\n");
			return (0);
		}
	}
	return (0);
}
