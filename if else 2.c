#include <stdio.h>
#include <math.h>
int main()
{
    char ch ;

    printf ("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("The character is lower\n \a");
    }


  /*  else if (n < 0) {
        printf("The number is negative\n \a");
    }
*/
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is upper\n \a");
    }


    return 0;
}
