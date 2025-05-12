#include <stdio.h>

int main() {
  //  int numInputs;
  //  printf("How many inputs do you want to enter? ");
   // scanf("%d", &numInputs);

    int i;
    for (i = 0; i < 10; i++) {
        int userInput;
        printf("Enter input %d: ", i + 1);
        scanf("%d", &userInput);

        // Process the input or do something with it
       // printf("You entered: %d\n", userInput);
    }

    return 0;
}

