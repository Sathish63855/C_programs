#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL)); 
    int target = rand()%10+1;
    int guess;
    int attempts  = 0;

    printf("Guess the number between 1 to 10 :\n");

    while(1)
    {
        printf("Input the number : ");
        scanf("%d", &guess);
        attempts++;

        if( guess == target)
        {
            printf("Congratulations! You guessed the correct number \'%d\' in %d attempts.\n", guess, attempts);
            break;
        }
        else
        {
            printf("Incorrect guess.Try again\n");
        }
    }
}