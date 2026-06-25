#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0, maxElement;

    for (int i = 0; i < size; i++)
     {
        int count = 1;

        for (int j = i + 1; j < size; j++)
         {
            if (arr[i] == arr[j])
             {
                count++;
            }
        }

        if (count > maxCount) 
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum Frequency Element: %d\n", maxElement);

    return 0;
}