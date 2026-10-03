#include<stdio.h>
int main()
{
	char light, button;
	
	printf("Enter the traffic light colour: ");
	scanf(" %c", &light);
	
	switch(light)
	{
		case 'R':
			printf("\nHas the button been pushed?");
			scanf(" %c", &button);
			
			switch(button)
			{
				case 'Y':
					printf("\nStop and Wait");
					break;
					
				case 'N':
					printf("Stop and Cross");
					break;
					
				default:
					printf("Invalid Input");
			}
			break;
			
		case 'G':
			printf("\nHas the button been pushed?");
			scanf(" %c", &button);
			
			switch(button)
			{
				case 'Y':
					printf("\nGo but watch for Pedestrians");
					break;
					
				case 'N':
					printf("Go");
					break;
					
				default:
					printf("Invalid Input");
			}
			break;
		
		case 'Y':
			printf("Get ready");
			break;
		
		default:
			printf("Invalid Input");
	}
}
