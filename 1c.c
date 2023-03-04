#include <stdio.h>

int main(void)
{
	int i = 0, number = 0;
	int start_num = 0;

	while (i < 5)
	{
		printf("Please enter the number\n");
		scanf("%d", &number);
		if (number % 2 == 0)
		{
			start_num += number;
			i++;
		}
	}
	printf("The sum of the five even numbers you entered is %d\n", start_num);
	return (0);
}	
