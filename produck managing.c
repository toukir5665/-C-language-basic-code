#include<stdio.h>

int main()
{
    int ck, sum, given_tk, return_tk;
    printf("Do you want to buy anythings? \n");
    printf("If yes press 1.\n");
    printf("If no press 0.\n");
    scanf("%d", &ck);
    if(ck==0)
    {
        printf("Thank's, see you later.\n");
    }
    else if(ck!=0 && ck!=1)
    {
        printf("Wrong input!!\n");
    }
    else if(ck==1)
    {
        int note_pad;
        printf("How many note pad's: ");
        scanf("%d", &note_pad);
        note_pad=note_pad*50;

        int pen;
        printf("How many pen's: ");
        scanf("%d", &pen);
        pen=pen*7;

        int pencil;
        printf("How many pencil's: ");
        scanf("%d", &pencil);
        pencil=pencil*15;

        int eraser;
        printf("How many eraser's: ");
        scanf("%d", &eraser);
        eraser=eraser*10;

        sum=pen+pencil+eraser+note_pad;
        printf("\nYour have to pay %dtk",sum );

        printf("\nInput your money in tk: ");
        scanf("%d", &given_tk);

        if(given_tk >= sum)
        {
            return_tk = given_tk - sum;
            printf("Payment successful.:( \n");
            printf("You will receive %dtk.", return_tk);
        }
        else
        {
            printf("Your input money less than you spend.!!\n");
        }
    }
    printf("\n\n");

    getch();
}
