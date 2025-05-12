#include <stdio.h>
int main()
{
    int i, sum=0, a[5]={2,3,4,1,5};

    for(i=0; i<5; i++){
        sum += a[i];
    }
    printf("the sum is: %d \n", sum);
    printf("The average is: %d \n", sum/5);


    return 0;
}
