#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));  // Initialize random seed based on current time
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");

    printf("Enter your guess: ");
    scanf("%d", &guess);
    attempts++;

    while (guess != number) {
        if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Too low! Try again.\n");
        }

        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
    }

    printf("Congratulations! You guessed the number in %d attempts.\n", attempts);

    return 0;
}
