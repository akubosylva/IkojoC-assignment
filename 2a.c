#include <stdio.h>

int main(void)
{
	int first_num = 0;
	int second_num = 0;

	printf("Please enter the first number\n");
	scanf("%d", &first_num);
	printf("Please enter the second number\n");
	scanf("%d", &second_num);

	if (first_num % second_num == 0 && first_num != second_num)
	{
		printf("The first number is a multiple of the second number\n");
		return (0);
	}
	else if (second_num % first_num == 0 && second_num != first_num)
	{
		printf("The second number is a multiple of the first number\n");
		return (0);
	}
	else if (first_num == second_num)
	{
		printf("The first and second number are equal\n");
		return (0);
	}
	else
		printf("The first and second numbers are not multiple of each other\n");
	return (0);
}

