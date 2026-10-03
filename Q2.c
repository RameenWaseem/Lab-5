#include<stdio.h>
int main()
{
	char day;
	int age, price;
	float d_price, discount, f_price;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("\n Enter day (W for Weekday and H for Holiday/Weekend): ");
	scanf(" %c", &day);
	
	if (age < 12 && age > 60)
	{
		if (day == 'H' || day == 'h')
		{
			price = 1000;
			discount = 0.15;
			d_price = price * discount;
			f_price = price - d_price;
		}
		else
		{
			price = 1000;
			discount = 0.10;
			d_price = price * discount;
			f_price = price - d_price;
		}
	}
	else if(age >= 12 && age <= 60)
	{
		if (day == 'W' || day == 'w')
		{
			price = 800;
			discount = 0.15;
			d_price = price * discount;
			f_price = price - d_price;
		}
		else
		{
			price = 800;
			discount = 0.10;
			d_price = price * discount;
			f_price = price - d_price;
		}
	}
	
	printf("====== Cinema Bill ======\n");
	printf("Total Price: Rs %d\n", price);
	printf("Discount Received: %.2f\n", discount);
	printf("Discounted Price: %.2f\n", d_price);
	printf("Final Price: %.2f\n", f_price);
	printf("===========================");
}
