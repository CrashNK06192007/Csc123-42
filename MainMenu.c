#include <stdio.h>
#include <stdbool.h>

static void discard_line(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}
static void pressEnterToContinue(void)
{    
    printf("\nPress Enter to continue...");
    fflush(stdout);
    getchar();

    printf("\n\n");
}
static void run_game(int maxNoise, int noiseChance)
{
    printf("Game starting...\n");
    printf("Max noise: %d\n", maxNoise);
    printf("Noise Chance: %d%%\n", noiseChance);
}
int main(void) {
    int choice;
    int difficulty;
    int maxNoise;
    int noiseChance;
    char const *invalidChoiceMsg  = "Invalid choice\n";
    bool choosingDifficult = true;
    bool running = true;
    
    while (running){
        printf("=== ESCAPE FROM LARRY ===\n");
        printf("1. Start Game\n");
        printf("2. How to Play\n");
        printf("3. About / Credits\n");
        printf("4. Quit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1) 
        {
            printf("%s", invalidChoiceMsg);
            discard_line();
            continue;
        }
        discard_line();
        
        switch (choice) {
            case 1:
                choosingDifficult = true;
                while(choosingDifficult)
                {
                    printf("\nSelect a difficulty: \n");
                    printf("1. Easy\n");
                    printf("2. Medium\n");
                    printf("3. Hard\n");
                    printf("4. Nightmare\n");
    
                    printf("Enter difficulty: ");
                    
                    if (scanf("%d", &difficulty) != 1) 
                    {
                        printf("%s", invalidChoiceMsg);
                        discard_line();
                        continue;
                    }
                    discard_line();

                    switch (difficulty)
                    {
                        case 1:
                            maxNoise = 5;
                            noiseChance = 15;
                            printf("Difficulty selected: Easy\n");
                            printf("Noise Limit: %d\n", maxNoise);
                            printf("Noise Chance: %d%%\n", noiseChance);
                            choosingDifficult = false;
                            run_game(maxNoise, noiseChance);
                            pressEnterToContinue();
                            break;
                        case 2:
                            maxNoise = 3;
                            noiseChance = 25;
                            printf("Difficulty selected: Medium\n");
                            printf("Noise Limit: %d\n", maxNoise);
                            printf("Noise Chance: %d%%\n", noiseChance);
                            choosingDifficult = false;
                            run_game(maxNoise, noiseChance);
                            pressEnterToContinue();
                            break;
                        case 3:
                            maxNoise = 3;
                            noiseChance = 35;
                            printf("Difficulty selected: Hard\n");
                            printf("Noise Limit: %d\n", maxNoise);
                            printf("Noise Chance: %d%%\n", noiseChance);
                            run_game(maxNoise, noiseChance);
                            choosingDifficult = false;
                            pressEnterToContinue();
                            break;
                        case 4:
                            maxNoise = 2;
                            noiseChance = 45;
                            printf("Difficulty selected: Nightmare\n");
                            printf("Noise Limit: %d\n", maxNoise);
                            printf("Noise Chance: %d%%\n", noiseChance);
                            run_game(maxNoise, noiseChance);
                            choosingDifficult = false;
                            pressEnterToContinue();
                            break;
                        default:
                            printf("%s", invalidChoiceMsg);
                            break;  
                }
            }
                break;
            case 2:
                printf("=========================\n");
                printf("        HOW TO PLAY\n");
                printf("=========================\n");

        
                printf("You have been kidnapped by Larry Benjamin, a wealthy serial Killer.\n");
                printf("You must search his house for three items: a phone, a key, and a code. \n");
                printf("Move carefully. Making too much noise will wake Larry.\n");
                printf("Find all three items to escape before he catches you.\n");
                pressEnterToContinue();
                break;
            case 3:
                printf("=== ABOUT / CREDITS ===\n");
                printf("Escape from Larry\n");
                printf("Created by: Julian Gonzalez Balsells\n");
                printf("Language: C\n");
                printf("\n");
                printf("A text-based escape game focused on exploration, inventory, and noise-based risk.\n");
                pressEnterToContinue();
                break;
            case 4:
                printf("Goodbye!\n");
                running = false;
                break;
            default:
                printf("%s", invalidChoiceMsg);
                break;
        }
    }
    return 0;
}
