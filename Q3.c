#include<stdio.h>
int main()
{
	int X, Y, Z, W;
	
	printf("Enter a number: ");
	scanf("%d", &X);
	printf("\nEnter a number: ");
	scanf("%d", &Y);
	printf("\nEnter a number: ");
	scanf("%d", &Z);
	printf("\nEnter a number: ");
	scanf("%d", &W);

    if (X > Y) 
	{
        if (X > Z) 
		{
            if (X > W) 
			{
                printf("The largest number is: %d\n", X);
            } 
			else 
			{
                printf("The largest number is: %d\n", W);
            }
        } 
		else 
		{
            if (Z > W) 
			{
                printf("The largest number is: %d\n", Z);
            } 
			else 
			{
                printf("The largest number is: %d\n", W);
            }
        }
    } 
	else 
	{
        if (Y > Z) 
		{
            if (Y > W) 
			{
                printf("The largest number is: %d\n", Y);
            } 
			else 
			{
                printf("The largest number is: %d\n", W);
            }
        }
		else 
		{
            if (Z > W) 
			{
                printf("The largest number is: %d\n", Z);
            } 
			else 
			{
                printf("The largest number is: %d\n", W);
            }
        }
    }

    return 0;
}

