#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    int n, i;
    struct Employee e[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEmployee %d\n", i+1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Employee Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Records\n");

    for(i=0; i<n; i++)
    {
        printf("\nID: %d", e[i].id);
        printf("\nName: %s", e[i].name);
        printf("\nSalary: %.2f\n", e[i].salary);
    }

    return 0;
}