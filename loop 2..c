//write a for loop, which print summation of all numbers which is divide by 3 & 5, between 30 to 120;
#include <stdio.h>
int main()
{
    int i, sum=0;
    for(i=30; i<=120; i=i+1){
        if (i%3==0 && i%5==0){
            sum = sum+i;
            printf("%d \n \a", i);
            printf("sum= %d \n", sum);
        }
    }

    return 0;
}

