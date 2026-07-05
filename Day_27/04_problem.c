#include <stdio.h>
int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n------ Marksheet ------\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);
    printf("Total Marks: %f\n", total);
    printf("Percentage : %f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+");
    else if (percentage >= 75)
        printf("Grade : A");
    else if (percentage >= 60)
        printf("Grade : B");
    else if (percentage >= 40)
        printf("Grade : C");
    else
        printf("Grade : Fail");

    return 0;
}