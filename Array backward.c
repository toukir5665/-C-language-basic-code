#include<stdio.h>
int main()
{
    int n, i, temp;
    printf("How many elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Array[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    //array reversing
    for(i=0; i<n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    printf("\nBackward array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }


    return 0;
}
