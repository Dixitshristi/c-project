#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int number_to_guess,guess;
    int attempts=0;
    const int  MAX_ATTEMPTS=5;
    //
    srand(time(0));
    number_to_guess=rand()%100+1;
    printf("welcome to the number guessing game:\n");
    printf("I'm thinking about of a number between 1 to 100 \n");
    printf("you have %d attempts to guess it \n",MAX_ATTEMPTS);
    while (attempts<MAX_ATTEMPTS)
    {
        printf("ENTER YOUR GUESS:\n");
        scanf("%s",&guess);

        if (guess < number_to_guess)
        {
            printf("Too low! try again\n");
        }
        else if (guess > number_to_guess)
        {
            printf("Too high! try again \n");
        }
        else
        {
            printf("well done! you guess it in %d attempts :\n",attempts+1);
            break;
        }
        attempts++;
    }
    if (attempts=MAX_ATTEMPTS)
    {
        printf("SORRY,you did not guess it.The number was %d.\n",number_to_guess);
    }
    return 0;
}
