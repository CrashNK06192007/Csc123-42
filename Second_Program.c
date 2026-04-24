/* Julian Gonzalez
 * Exam Program
 * April/4th_2026
 * */

//Create a seperate function to print your name using a loop.
//Function will run six times
// Function will not return anything
// Main function will prompt to enter a number that will be apssed to a seperate function
// Main function will cal the name loop function and pas it the number that the user entered
#include <stdio.h>
#include <stdlib.h>
void nameLoop(int nameNum);

int main() {
        int nameNum;

        printf("Enter a Number: ");
        scanf("%d", &nameNum);
        //call nameLoop
        nameLoop(nameNum);

        return EXIT_SUCCESS;
}

void nameLoop(int nameNum){
        for(int i =0; i < 6; i++){
                printf("Julian%d\n", nameNum);
        }
}
