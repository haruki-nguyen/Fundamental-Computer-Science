#include <stdio.h>

int main()
{
    int secret = 6; /* choose a number */
    int guess;

    /* repeat until guess == secret */
    /* ask user to enter guess */
    /* read user input */
    while (guess != secret)
    {
        printf("Guess: ");
        scanf("%d", &guess);

        /* if guess is lower → print "Too low" */
        /* else if guess is higher → print "Too high" */
        /* else → print "Correct!" */
        if (guess < secret)
        {
            printf("Too low!\n");
        }
        else if (guess > secret)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Correct!");
        }
    }

    return 0;
}