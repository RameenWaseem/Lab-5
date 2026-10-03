#include<stdio.h>
int main()
{
	int sem;
	char dep;
	
	printf("Enter your department\n 'C' for Computer Science\n 'E' for Electrical Engineering\n 'B' for Business:\n ");
	scanf(" %c", &dep);
	
	switch(dep)
	{
		case 'C':
			printf("\nEnter your semester: ");
			scanf("%d", &sem);
			
			switch(sem)
			{
				case 1:
					printf("\nProgramming Fundamentals");
					break;
				
				case 2:
					printf("\nNatural Sciences");
					break;
				
				case 3:
					printf("\nOOP");
					break;
				
				default:
					printf("\nEnter valid semester");
			}
			break;
			
		case 'E':
			printf("\nEnter your semester: ");
			scanf("%d", &sem);
			
			switch(sem)
			{
				case 1:
					printf("\nPhysics");
					break;
				
				case 2:
					printf("\nFoundational Mathematics");
					break;
				
				case 3:
					printf("\nCircuit Analysis");
					break;
				
				default:
					printf("\nEnter valid semester");
			}
			break;
			
		case 'B':
			printf("\nEnter your semester: ");
			scanf("%d", &sem);
			
			switch(sem)
			{
				case 1:
					printf("\nMarketing");
					break;
				
				case 2:
					printf("\nFinance");
					break;
				
				case 3:
					printf("\nAccounting");
					break;
				
				default:
					printf("\nEnter valid semester");
			}
			break;
		
		default:
			printf("Enter valid department");
	}
}
