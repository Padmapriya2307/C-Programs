#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;               //int randomNumber = rand() % 101; --> Generate a random number between 0 and 100                                                
    int no_of_guesses = 0;                               //(rand() % 100) + 1;    --> Generate a random number between 1 and 100
    int guessed;                                         //  --> (0 - 99) +1 ==> (1 - 100)
    do
    {
        printf("Guess the Number: ");
        scanf("%d", &guessed);
        no_of_guesses++;
        if (guessed > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (guessed < randomNumber) {
            printf("Too low! Try again.\n");
        }
    } while (guessed != randomNumber);

    printf("\nYou guessed the number %d in %d guesses!\n", randomNumber, no_of_guesses);
    
    return 0;
}