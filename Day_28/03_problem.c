#include <stdio.h>
int main() 
{
    int seats = 10;
    int choice, book;

    while(1) 
    {
        printf("\   Ticket Booking System\n");
        printf("1. Book Ticket\n2. Check Available Seats\n3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                printf("Enter Number of Tickets: ");
                scanf("%d", &book);

                if(book <= seats) 
                {
                    seats -= book;
                    printf("Ticket Booked Successfully!\n");
                } else {
                    printf("Not Enough Seats!\n");
                }
                break;

            case 2:
                printf("Available Seats = %d\n", seats);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}