#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++)
     {
        actualSum += arr[i];
    }

    printf("Missing Number = %d", expectedSum - actualSum);

    return 0;
}