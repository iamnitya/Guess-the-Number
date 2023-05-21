#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;
    srand(time(0));
    number = (rand()%100)+1;
    printf("%d\n",number);
    printf("Enter a number between 1 and 100: ");
    scanf("%d",&guess);
    printf("%d\n",guess);
    
    while (number!=guess){
        
        if (guess>number){
            printf("Too high\n");
        }
        else{
            printf("Too low\n");
        }
        printf("Guess another number: ");
        scanf("%d",&guess);
        printf("%d\n",guess);
    }
    printf("You guessed it right! %d is the correct value.",number);
    return 0;
}
