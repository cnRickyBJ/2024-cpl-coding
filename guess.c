//
// Created by cnRicky_BJ on 2024/5/6.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int high = 100;
    int chance = 7;

    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances.\n",
           high,chance);


    srand(time(NULL));
    int secret = rand() % high + 1;
    printf("Enter your guess.\n");

    while(chance > 0){
        int guess;
        scanf("%d", &guess);

        if(guess == secret) {
            printf("You Win!\n");
            break;
        } else if(guess > secret) {
            printf("guess > secret\n");
        } else {
            printf("guess < secret\n");
        }
        chance--;
    }

    return 0;
}