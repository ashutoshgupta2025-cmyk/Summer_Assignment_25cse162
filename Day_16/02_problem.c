#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = 7;
    int maxFreq = 0, element;

    for (int i = 0; i < n; i++)
     {
        int count = 1;

        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }

        if (count > maxFreq) 
        {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d", element);

    return 0;
}