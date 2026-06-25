#include <stdio.h>
int findMissing(int arr[], int size, int n) 
{
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) 
    {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() 
{
    int arr[] = {1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 5;

    printf("Missing Number: %d\n", findMissing(arr, size, n));

    return 0;
}