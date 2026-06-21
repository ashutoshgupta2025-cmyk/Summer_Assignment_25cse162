#include <stdio.h>
int main()
 {
    int arr[100], n, i, l,s;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    l = s = arr[0];

    for(i = 1; i < n; i++) 
    {
        if(arr[i] > l)
            l = arr[i];

        if(arr[i] < s)
            s = arr[i];
    }

    printf("Largest element = %d\n", l);
    printf("Smallest element = %d\n", s);

    return 0;
}