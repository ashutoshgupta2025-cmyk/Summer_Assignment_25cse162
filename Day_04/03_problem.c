#include <stdio.h>
#include <math.h>
int main()
 {
    int n, temp, r, digits = 0;
    int s = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
     {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0) 
    {
        r = temp % 10;
        s = s + pow(r, digits);
        temp = temp / 10;
    }

    if(s == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);

    return 0;
}