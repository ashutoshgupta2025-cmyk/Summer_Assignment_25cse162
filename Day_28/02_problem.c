#include <stdio.h>
int main() 
{
    int choice;
    float balance = 1000, amount;

    while(1) 
    {
        printf("   Bank Account System\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
         {
            case 1:
                printf("Enter Amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited\n");
                break;

            case 2:
                printf("Enter Amount: ");
                scanf("%f", &amount);
                if(amount <= balance)
                 {
                    balance -= amount;
                    printf("Amount Withdrawn\n");
                } else 
                {
                    printf("Insufficient Balance\n");
                }
                break;

            case 3:
                printf("Current Balance = %f\n", balance);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}