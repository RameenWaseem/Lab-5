#include<stdio.h>
#include<math.h>
int main()
{
	int mode, num1, num2;
	char oper, choice;
	
	printf("Enter a mode\n 1. Arithmetic\n 2. Power/ Root\n");
	scanf("%d", &mode);
	
	switch(mode)
	{
		case 1:
			printf("\nEnter operator: ");
			scanf(" %c", &oper);
			
			switch(oper)
			{
				case '+':
					printf("\nEnter two numbers: ");
					scanf("%d %d", &num1, &num2);
					printf("\nThe result of %c operator is %d", oper, num1 + num2);
					break;
					
				case '-':
					printf("\nEnter two numbers: ");
					scanf("%d %d", &num1, &num2);
					printf("\nThe result of %c operator is %d", oper, num1 - num2);
					break;
					
				case '*':
					printf("\nEnter two numbers: ");
					scanf("%d %d", &num1, &num2);
					printf("\nThe result of %c operator is %d", oper, num1 * num2);
					break;
					
				case '/':
					printf("\nEnter two numbers: ");
					scanf("%d %d", &num1, &num2);
					printf("\nThe result of %c operator is %d", oper, num1 / num2);
					break;
					
				default:
					printf("/nEnter valid Operator");
			}
			break;
		
		case 2:
			printf("Enter mode\n 's'. Computing a Square\n 'r'. Square Root\n");
			scanf(" %c", &choice);
			
			switch(choice)
			{
				case 's':
					printf("Enter a number: ");
					scanf("%d", &num1);
					printf("\nThe result of %c choice is %d", choice, num1 * num1);
					break;
				
				case 'r':
					printf("Enter a number: ");
					scanf("%d", &num1);
					printf("\nThe result of %c choice is %d", choice, sqrt(num1));
					break;
				
				default:
					printf("Enter valid choice");
			}
			break;
	}
	
}
