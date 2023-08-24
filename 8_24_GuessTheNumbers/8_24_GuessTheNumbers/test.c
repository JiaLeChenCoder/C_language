#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guess the number between 1 and 100");
        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;
            if (guess > number) {
                printf("Too high!   ");
            }
            else if (guess < number) {
                printf("Too low!  ");
            }
            else {
                printf("Congratulations! You guessed the number in %d attempts ", attempts);
            }
        } while (guess != number);
        return 0;
}
