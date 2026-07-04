#include <stdio.h>
#include <string.h>
int main() 
{
    char answer[30];
    int score = 0;

    printf("Simple Quiz\n");

    printf("1. What is the capital of India? ");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "New Delhi") == 0)
        score++;

    printf("2. Which language is used for system programming? ");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "C") == 0)
        score++;

    printf("3. What is 5 + 7? ");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "12") == 0)
        score++;

    printf("Your Score = %d/3\n", score);

    return 0;
}