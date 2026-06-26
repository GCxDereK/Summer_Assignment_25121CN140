#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess a number between 1 and 100\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess == number) {
            printf("Congratulations! You guessed the correct number.");
            break;
        }
        else if(guess < number) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("Too high! Try again.\n");
        }
    }

    return 0;
}