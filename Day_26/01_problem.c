#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int guess, number;

    srand(time(0));
    number = rand() % 10 + 1;

    printf("Guess a number between 1 and 10:\n");

    do {
        scanf("%d", &guess);

        if (guess > number)
            printf("Too high! Try again.\n");
        else if (guess < number)
            printf("Too low! Try again.\n");
        else
            printf("Congratulations! You guessed the correct number.\n");

    } while (guess != number);

    return 0;
}