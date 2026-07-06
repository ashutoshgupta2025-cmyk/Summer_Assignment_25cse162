#include <stdio.h>
int main() 
{
    int choice;
    char book[50];
    int id;

    while(1)
     {
        printf("   Library Management System\n");
        printf("1. Add Book\n2. Issue Book\n3. Return Book\n4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                printf("Enter Book Name: ");
                scanf("%s", book);
                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d", &id);
                printf("Book Issued Successfully!\n");
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &id);
                printf("Book Returned Successfully!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}