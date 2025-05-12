#include <stdio.h>
#include <math.h>
int main()
{
    char ch ;

    printf ("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'o'){
        printf("%c is vowel\n \a", ch);
    }

    else {
        printf("%c is consonant\n \a", ch);
    }


    return 0;
}

