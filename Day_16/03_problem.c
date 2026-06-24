#include <stdio.h>
int main()
 {
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int sum = 9;
    int found = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++)
         {
            if (arr[i] + arr[j] == sum) 
            {
                printf("Pair Found: %d and %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("No Pair Found");

    return 0;
}