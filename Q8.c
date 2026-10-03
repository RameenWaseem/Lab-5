#include<stdio.h>
int main()
{
    int categoryChoice;
    int itemChoice;

    printf("--- Restaurant Menu ---\n");
    printf("Select a category:1. Beverages\n2. Main Course\n3. Desserts\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &categoryChoice);

	switch (categoryChoice) 
	{
        case 1: 
            printf("--- Beverages Menu ---\n");
            printf("1. Coffee\n");
            printf("2. Tea\n");
            printf("3. Soda\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &itemChoice);

            switch (itemChoice) 
			{
                case 1:
                    printf("You ordered Coffee. Price: $3.50\n");
                    break;
                    
                case 2:
                    printf("You ordered Tea. Price: $2.75\n");
                    break;
                    
                case 3:
                    printf("You ordered Soda. Price: $2.00\n");
                    break;
                    
                default:
                    printf("Invalid beverage choice!\n");
                    break;
            }
            break;

        case 2: 
            printf("--- Main Course Menu ---\n");
            printf("1. Burger\n");
            printf("2. Pizza\n");
            printf("3. Pasta\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &itemChoice);

            switch (itemChoice) 
			{
                case 1:
                    printf("You ordered a Burger. Price: $8.99\n");
                    break;
                    
                case 2:
                    printf("You ordered a Pizza. Price: $12.50\n");
                    break;
                    
                case 3:
                    printf("You ordered Pasta. Price: $10.99\n");
                    break;
                    
                default:
                    printf("Invalid main course choice!\n");
                    break;
            }
            break;

        case 3: 
            printf("--- Desserts Menu ---\n");
            printf("1. Ice Cream\n");
            printf("2. Cake\n");
            printf("3. Pie\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &itemChoice);

            switch (itemChoice) 
			{
                case 1:
                    printf("You ordered Ice Cream. Price: $4.00\n");
                    break;
                    
                case 2:
                    printf("You ordered Cake. Price: $5.50\n");
                    break;
                    
                case 3:
                    printf("You ordered Pie. Price: $4.75\n");
                    break;
                    
                default:
                    printf("Invalid dessert choice!\n");
                    break;
            }
            break;

        default:
            printf("Invalid category choice! Please select 1, 2, or 3.\n");
            break;
    }

   
}


