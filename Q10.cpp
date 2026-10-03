#include <stdio.h>

int main() {
    int account_type;
    int transaction_choice;
    float balance = 25000.0;
    float amount;

    printf("Select an account type:\n");
    printf("1 for Savings\n");
    printf("2 for Current\n");
    printf("3 for Student\n");
    printf("Enter choice: ");
    scanf("%d", &account_type);

    switch (account_type) 
	{
        case 1: 
            printf("\n--- Savings Account ---\n");
            printf("1 for Withdraw\n");
            printf("2 for Deposit\n");
            printf("3 for Check Balance\n");
            printf("Enter transaction choice: ");
            scanf("%d", &transaction_choice);

            switch (transaction_choice) 
			{
                case 1: 
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if (amount > 0 && amount <= balance && amount <= 10000) 
					{
                        balance -= amount;
                        printf("Withdrawal successful! New balance: %.2f\n", balance);
                    } 
					else 
					{
                        printf("Error: Invalid amount, insufficient balance, or limit exceeded (Savings limit: 10000).\n");
                    }
                    break;
                    
                case 2: 
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if (amount > 0) 
					{
                        if (amount > 100000) 
						{
                            printf("Please visit the branch for verification.\n");
                        } 
						else
						{
                            balance += amount;
                            printf("Deposit successful! New balance: %.2f\n", balance);
                        }
                    } 
					else 
					{
                        printf("Error: Invalid deposit amount.\n");
                    }
                    break;
                    
                case 3: 
                    printf("Current balance: %.2f\n", balance);
                    break;
                default:
                    printf("Error: Invalid transaction choice.\n");
            }
            break;

        case 2: 
            printf("\n--- Current Account ---\n");
            printf("1 for Withdraw\n");
            printf("2 for Deposit\n");
            printf("3 for Check Balance\n");
            printf("Enter transaction choice: ");
            scanf("%d", &transaction_choice);

            switch (transaction_choice) 
			{
                case 1: 
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if (amount > 0 && amount <= balance && amount <= 20000) 
					{
                        balance -= amount;
                        printf("Withdrawal successful! New balance: %.2f\n", balance);
                    } 
					else 
					{
                        printf("Error: Invalid amount, insufficient balance, or limit exceeded (Current limit: 20000).\n");
                    }
                    break;
                    
                case 2:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if (amount > 0) 
					{
                        balance += amount;
                        printf("Deposit successful! New balance: %.2f\n", balance);
                    } else 
					{
                        printf("Error: Invalid deposit amount.\n");
                    }
                    break;
                    
                case 3: 
                    printf("Current balance: %.2f\n", balance);
                    break;
                    
                default:
                    printf("Error: Invalid transaction choice.\n");
            }
            break;

        case 3: 
            printf("\n--- Student Account ---\n");
            printf("1 for Withdraw\n");
            printf("2 for Deposit\n");
            printf("3 for Check Balance\n");
            printf("Enter transaction choice: ");
            scanf("%d", &transaction_choice);

            switch (transaction_choice) 
			{
                case 1: 
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if (amount > 0 && amount <= balance && amount <= 5000) 
					{
                        balance -= amount;
                        printf("Withdrawal successful! New balance: %.2f\n", balance);
                    }
					else 
					{
                        printf("Error: Invalid amount, insufficient balance, or limit exceeded (Student limit: 5000).\n");
                    }
                    break;
                    
                case 2: 
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if (amount > 0) 
					{
                        if (amount > 50000) 
						{
                            printf("Please visit the branch for verification.\n");
                        }
						else 
						{
                            balance += amount;
                            printf("Deposit successful! New balance: %.2f\n", balance);
                        }
                    } 
					else 
					{
                        printf("Error: Invalid deposit amount.\n");
                    }
                    break;
                    
                case 3: 
                    printf("Current balance: %.2f\n", balance);
                    break;
                    
                default:
                    printf("Error: Invalid transaction choice.\n");
            }
            break;

        default:
            printf("Error: Invalid account type.\n");
    }

    return 0;
}

