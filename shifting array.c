#include<stdio.h>
int ShiftLeft(int arr[5], int k, int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i+k];
    }
    for(int i=0; i<k; i++)
    {
        arr[i]=0;
    }
    printf("Modified array is: \n");
    for(int i=0; i<n; i++)
    {
        printf("array[%d]= %d\n", i, arr[i]);
    }

}

int main()
{
    int n, k;
    printf("How many array elements:\n ");
    scanf("%d", &n);
    int arr[n];
    printf("How many Left shift:\n ");
    scanf("%d", &k);
    printf("Enter array elements: \n");
    for(int i=0; i<n; i++)
    {
        printf("array[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    ShiftLeft(arr[5], k, n);
}
