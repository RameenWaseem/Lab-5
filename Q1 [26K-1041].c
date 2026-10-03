#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter your marks: ");
	scanf("%d", &marks);
	
	if (marks >= 90)
	{
		if (marks == 100)
		{
			printf("Perfect Score!\n");
		}
		printf("A");
	}
	else if (marks >= 75)
	{
		printf("B");
	}
	else if (marks >= 60)
	{
		printf("C");
	}
	else if (marks >= 40)
	{
		printf("D");
	}
	else
	{
		printf("Fail");
	}
}
