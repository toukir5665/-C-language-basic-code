#include <stdio.h>
int main()
{
    int n, m, i;
    printf("Which multiplication do you want? ");
    scanf("%d", &n);
    m=0;
    for(i=1; i<=10; i++){
        printf("%d*%d=%d \n", n, i, m=m+n);
    }

    return 0;
}
