#include <stdio.h>
int main() 
{
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    int found = 0;

    for (int i = 0; i < size; i++)
     {
        for (int j = i + 1; j < size; j++)
         {
            if (arr[i] + arr[j] == target)
             {
                printf("Pair Found: %d and %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("No Pair Found\n");

    return 0;
}