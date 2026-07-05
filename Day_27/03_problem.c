#include <stdio.h>
int main()
{
    int empId;
    char name[50];
    float basic, hra, da, gross;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    printf("  Salary Details\n");
    printf("Employee ID : %d\n", empId);
    printf("Name        : %s\n", name);
    printf("Basic Salary: %f\n", basic);
    printf("HRA         : %f\n", hra);
    printf("DA          : %f\n", da);
    printf("Gross Salary: %f\n", gross);

    return 0;
}