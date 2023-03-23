#include <stdio.h>

int main(void)
{
	int n1 = 0;
	int n2 = 0;
	int answer = 0;

	printf("Enter the first number\n");
	scanf("%d", &n1);
	printf("Enter the second number\n");
	scanf("%d", &n2);
	printf("Enter the result of the multiplication of the first and second number\n");
	scanf("%d", &answer);

	if (answer == (n1 * n2))
	{
		printf("Correct\n");
		return (0);
	}
	else
		printf("Incorrect\n");
	return (0);
}
