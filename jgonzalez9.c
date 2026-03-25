//Julian Gonzalez

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        srand(time(NULL));
        int guess = 0;
        int answer = rand() % 20;

        while(guess != answer)
        {

                printf("Guess a number between 0-20:\n");
                scanf("%d",&guess);

                if (guess < answer)
                {
                        printf("Too Low! Try Again!\n");
                } else if (guess > answer)
                {
                        printf("Too High! Try Again!\n");
                } else if (guess == answer) {
                        for (int i = 0; i < answer; i++)
			{
				printf("Congratulations You Win!\n");
			}
                } else {
                        printf("Please Enter a Valid Number!\n");
                }

        }
        return EXIT_SUCCESS;
}
