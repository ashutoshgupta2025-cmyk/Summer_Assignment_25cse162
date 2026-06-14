#include <stdio.h>
int main()
{
    int x = 0, n, i;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            x = 1;
            break;
        }
    }

    if(x == 0)
        printf("%d is prime number", n);
    else
        printf("%d is not prime number", n);

    return 0;
}