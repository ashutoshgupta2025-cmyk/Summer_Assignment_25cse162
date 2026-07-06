#include <stdio.h>
int main() 
{
    char name[50];
    char phone[15];
    int choice;

    while(1) 
    {
        printf("   Contact Management System\n");
        printf("1. Add Contact\n2. View Contact\n3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s", name);
                printf("Enter Phone Number: ");
                scanf("%s", phone);
                printf("Contact Saved Successfully!\n");
                break;

            case 2:
                printf("\nName : %s\n", name);
                printf("Phone: %s\n", phone);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}