#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    char department[50];
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Department: ");
    scanf("%s", e.department);

    printf("  Employee Details\n");
    printf("Employee ID : %d\n", e.id);
    printf("Name        : %s\n", e.name);
    printf("Department  : %s\n", e.department);

    return 0;
}