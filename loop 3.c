
//write a for loop, which print summation of all numbers which is divide by 3 & 5, between 30 to 120;
#include <stdio.h>
int main()
{
    int i=30, sum=0;
    while(i<=120){
        if (i%3==0 && i%5==0){
            sum = sum+i;
            printf("%d \n \a", i);
            }
            i++;
            printf("sum= %d \n", sum);
    }

    return 0;
}
