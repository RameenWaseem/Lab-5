#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter the first side of the triangle: ");
	scanf("%d", &a);
	printf("Enter the second side of the triangle: ");
	scanf("%d", &b);
	printf("Enter the third side of the triangle: ");
	scanf("%d", &c);
	
	if (a + b > c)
	{
		if (b + c > a)
		{
			if (c + a > b)
			{
				printf("Valid Traingle");
				
				if ( a == b && b == c && c == a)
				{
					printf("\nEquilateral Traingle");
				}
				else if (a == b || a == c || b == c)
				{
					printf("\nIsosceles Triangle");
				}
				else
				{
					printf("Scalene Triangle");
				}
			}
		}
	}
	else
	{
		printf("Invalid");
	}
}
