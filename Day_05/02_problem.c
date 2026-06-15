#include <stdio.h>
int main()
 {
    int n, temp, r, s = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) 
    {
        r = temp % 10;
        fact = 1;

        for(i = 1; i <= r; i++)
         {
            fact *= i;
        }

        s += fact;
        temp /= 10;
    }

    if(s == n)
        printf("%d is a Strong Number", n);
    else
        printf("%d is not a Strong Number", n);

    return 0;
}