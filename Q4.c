#include<stdio.h>
int main()
{
	int units;
	char type;
	float rate, price;
	
	printf("Enter Connection Type: ");
	scanf(" %c", &type);
	
	if (type == 'D' || type == 'd')
	{
		printf("\nEnter number of units of electricity used: ");
		scanf("%d", &units);
		
		if (units >=0 || units <= 100)
		{
			rate = 13.48;
			price = units * rate;
		}
		else if (units >= 101 || units <= 300)
		{
			rate = 18.98;
			price = units * rate;
		}
		else
		{
			rate = 30.86;
			price = rate * units;
		}
	}
	else
	{
		printf("\nEnter number of units of electricity used: ");
		scanf("%d", &units);
		
		if (units >=0 || units <= 100)
		{
			rate = 15.48;
			price = units * rate;
		}
		else if (units >= 101 || units <= 300)
		{
			rate = 20.98;
			price = units * rate;
		}
		else
		{
			rate = 35.86;
			price = rate * units;
		}
 	}
 	
 	printf("\n=====================\n");
 	printf("======== Total Bill =========\n");
 	printf("Connection Type: %c\n", type);
 	printf("Rate per Unit: Rs %.2f\n", rate);
 	printf("Final Price: Rs %.2f\n", price);
 	printf("==========================");
}
