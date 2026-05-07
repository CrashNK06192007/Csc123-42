#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

bool hasPhone = false; 
bool hasKey = false;
bool hasCode = false;

int visited[5] = {0, 0, 0, 0, 0};
int noise = 0;
int noiseLevel = 0;

bool kitchenCounterChecked = false;
bool basementChecked = false;
bool bedroomChecked = false;
bool bathroomChecked = false;
bool studyRoomChecked = false;

bool gamerunning = true;

void Kitchen(void);
void Basement(void);
void Bedroom(void);
void Bathroom(void);
void StudyRoom(void);
void playerVictory(void);
void playerLose(void);
int generateRandomNoise(void);

int main() {
    char userName[50];
    char evilGuy[] = "Larry Pope";
	char response;
	srand(time(NULL));

    printf("Enter your username: ");
    scanf("%49s", userName);

    printf("You are %s.\n", userName);
	sleep(1);
    printf("%s walks in the quiet streets of Opulence, California.\n", userName);
    printf("The air is quiet... Not a single car has passed by.\n");
   	sleep(2); 
	printf("When suddenly a man steps out from the dark, holding a large amount of cash.\n");

    printf("%s: Evening.\n", evilGuy);
    printf("%s: Oh, hi there!\n", userName);
    printf("%s: You look interested in cash, aren't you?\n", evilGuy);
	sleep(1);
	
	printf("%s: Interested?\n", evilGuy);
	sleep(1);
    
	printf("%s: You're damn right, free cash. No catch to this.\n", evilGuy);
    printf("%s: You want it or not?\n", evilGuy);
	sleep(1);
	
	printf("Do you accept or reject? (y/n)\n");
	scanf(" %c", &response);
	
	response = tolower(response);
	
	while (response != 'y' && response != 'n'){
		printf("Invalid Input! Respond either (y/n): ");
		scanf(" %c", &response);
		response = tolower(response);
	}

	if (response == 'y') {
		printf("%s: Excellent.\n", evilGuy);
		sleep(1);
		printf("%s: See? I knew you were smarter than most.\n", evilGuy);		
		sleep(1);
		printf("%s: Here, take the cash, it's all yours.\n", evilGuy);
		sleep(1);
		printf("You step closer and reach for the cash.\n");
		sleep(1);
		printf("%s: Good choice.\n", evilGuy);
		sleep(1);
		printf("Before you can react, something solid crashes into the back of your skull.\n");
		sleep(2);
		printf("Everything goes dark.\n");
	} else if (response == 'n'){
		printf("%s: No, eh?\n", evilGuy);
		sleep(1);
		printf("%s: Shame.\n", evilGuy);
		sleep(1);
		printf("You begin to walk away.\n");
		sleep(1);
		printf("%s: I really wasn't asking.\n", evilGuy);
		sleep(1);
		printf("You hear fast footsteps behind you.\n");
		sleep(1);
		printf("Then, darkness.\n");
	} 
	printf("Your eyes slowly open.\n");
	printf("Your head throbs with pain. The room is dark, cold and unfamiliar.\n");
	printf("For a moment you can barely breathe.\n");
	sleep(1);
    printf("%s: Wh- where the hell am I?\n", userName);
	sleep(1);
	printf("%s: What the heck just happened?\n", userName);
	sleep(1);
	printf("You push yourself up from the floor and look around.\n");
	sleep(1);
	printf("The door is locked.\n");
	printf("Somewhere deeper in the house, you hear the faint creak of wood above you.\n");
	sleep(1);
	printf("%s: No...\n", userName);
	sleep(1);
	printf("%s: That.. rotten dick... Larry..\n", userName);
	sleep(1);
	printf("A terrible realization settles in your chest.\n");
	printf("You have been taken somewhere far from help, and the man who brought you here is still inside the house.\n");
	sleep(1);
	printf("If you want to survive, you must remain quiet.\n");
	sleep(1);
	printf("Find the phone, the key, and the code.\n");
	sleep(1);
	printf("Then escape before Larry Pope wakes up.\n");
	sleep(1);
	
	while(gamerunning){
		int choice;

		
		printf("\nNoise Level: %d / 3\n", noiseLevel);		
		
		printf("Inventory: ");
		if(!hasPhone && !hasKey && !hasCode){
			printf("Empty");
		}
		if (hasPhone) printf("Phone ");
		if (hasKey) printf("Key ");
		if (hasCode) printf("Code ");
		printf("\n");

		printf("Rooms checked: ");
		if (!visited[0] && !visited[1] && !visited[2] && !visited[3] && !visited[4]){
			printf("None");
		}
		if(visited[0]) printf("Kitchen ");
		if(visited[1]) printf("Basement ");
		if(visited[2]) printf("Bedroom ");
		if(visited[3]) printf("Bathroom ");
		if(visited[4]) printf("Study Room ");
		printf("\n");
		
		printf("Which room would you like to enter?\n");
		printf("1. Kitchen\n");
		printf("2. Basement\n");
		printf("3. Bedroom\n");
		printf("4. Bathroom\n");
		printf("5. Study Room\n");
		printf("6. Attempt Escape\n");
		
		scanf("%d", &choice);
		
		//get choice
		switch (choice) {			
			//kitchen
			case 1:
				Kitchen();
				break;
			case 2:
				Basement();
				break;
			case 3:
				Bedroom();
				break;
			case 4:
				Bathroom();
				break;
			case 5:
				StudyRoom();
				break;
			case 6:
				playerVictory();
				break;
			default:
				printf("Invalid selection!\n");
		}		
	}
    return 0;
}
//Kitchen
void Kitchen(void) {
	bool inKitchen = true;
	int kitchenChoice;

	visited[0] = 1;

	while (inKitchen && gamerunning){
		noise = generateRandomNoise();

		printf("You step quietly into the kitchen.\n");
		printf("1. Search the counter.\n");
		printf("2. Check the drawers.\n");
		printf("3. Inspect the fridge.\n");
		printf("4. Leave the Kitchen.\n");
		
		scanf("%d", &kitchenChoice);
		

		switch (kitchenChoice){
			case 1:
				printf("You search the counter.\n");
				if (kitchenCounterChecked == true) {
					printf("There is nothing useful here.\n");
				}
				else{
					kitchenCounterChecked = true; 
					//generate random noise using rand()

					//If random number says noise happens
					if (noise < 25){
						printf("You hear a noise.\n");
						noiseLevel++;
					}
					else {
						printf("You find crumbs, dirty dishes, and nothing useful.\n");
					}
				}
			break;
			case 2:
				//you find the phone
				if (hasPhone == true){
					printf("The drawers are empty.\n");
				} else {
					if (noise < 25){
						printf("The drawer squeaks loudly.\n");
						noiseLevel++;
					} else {
						printf("You carefully slide the drawer open.\n");
					}					
					printf("You find a phone hidden in the drawer.\n");
					hasPhone = true;
				}
				
				break;
			case 3:
				printf("You inspect the fridge.\n");

				if (noise < 25){
					printf("The fridge door creaks loudly.\n");
					noiseLevel++;
				} else {
					printf("A foul smell hits you in the face.\n");
					printf("There is nothing useful inside.\n");
				}
				break;
			case 4:
				printf("You leave the Kitchen.\n");
				inKitchen = false;
				break;
			default:
				printf("Invalid selection!\n");
		}
		playerLose();
	}
}
//Basement 
void Basement(void) {
	int basementChoice;
	bool inBasement = true;

	visited[1] = 1;

	while (inBasement && gamerunning){
		noise = generateRandomNoise();

		printf("You descend into the basement.\n");
		printf("It is cold, dark, and full of old junk.\n");
		printf("1. Search the shelves.\n");
		printf("2. Inspect the floor.\n");
		printf("3. Listen carefully.\n");
		printf("4. Leave the basement.\n");
		
		scanf("%d" , &basementChoice);

		switch (basementChoice){
			case 1:
				printf("You search the shelves.\n");

				if(basementChecked == true){
					printf("You only find dusty boxes and useless junk.\n");
				} else {
					if (noise < 25){
						printf("A metal tool falls and clatters loudly.\n");
						noiseLevel++;
					}
					else{
						printf("You find nothing useful, only dust and cobwebs.\n");
					}
					basementChecked = true;
				}
				break;
			case 2:
				printf("You inspect the floor.\n");

				if (noise < 25){
					printf("You step on a loose board and it cracks loudly.\n");
					noiseLevel++;
				} else {
					printf("You notice old stains and broken wood, but nothing useful.\n");
				}
				break;
			case 3:
				printf("You hold your breath and listen.\n");

				if (noise < 25){
					printf("You hear movement somewhere above you.\n");
				} else {
					printf("For a moment, everything is silent.\n");
				}
				break;
			case 4:
				printf("You leave the basement.\n");
				inBasement = false;
				break;
			default:
				printf("Invalid selection.\n");
		}
		playerLose();
	}
}
//Bedroom
void Bedroom(void) {
	bool inBedroom = true;
	int bedroomChoice;

	visited[2] = 1;

	while(inBedroom && gamerunning){
		noise = generateRandomNoise();

		printf("You quickly enter the bedroom.\n");
		printf("1. Search the nightstand.\n");
		printf("2. Look under the bed.\n");
		printf("3. Inspect the closet.\n");
		printf("4. Leave the bedroom.\n");

		scanf("%d", &bedroomChoice);

		switch (bedroomChoice){
			case 1:
				printf("You search the nightstand.\n");

				if (bedroomChecked == true){
					printf("The drawers are empty.\n");
				}
				else{
					if (noise < 25){
						printf("The drawer squeaks loudly.\n");
						noiseLevel++;
					}
					else {
						printf("You slide the drawer open carefully.\n");
					}
					printf("You find a key hidden inside.\n");
					bedroomChecked = true;
					hasKey = true;
				}
				break;
			case 2:
				printf("You look under the bed.\n");

				if(noise < 25){
					printf("The bed frame scrapes against the floor.\n");
					noiseLevel++;
				}
				else {
					printf("Dust and old junk are all you find.\n");
				}
				break;
			
			case 3:
				printf("You inspect the closet.\n");

				if(noise < 25){
					printf("The closet door squeaks loudly.\n");
					noiseLevel++;
				} else {
					printf("You find hanging clothes and nothing useful.\n");
				}
				break;
			
			case 4:
				printf("You leave the bedroom.\n");
				inBedroom = false;
				break;
			default:
				printf("Invalid selection.\n");
		}
		playerLose();
	}
}
//Bathroom
void Bathroom(void) {
	bool inBathroom = true;
	int bathroomChoice;
	visited[3] = 1;

	while (inBathroom && gamerunning){
		noise = generateRandomNoise();

		printf("You quietly enter the bathroom.\n");
		printf("1. Check the mirror.\n");
		printf("2. Open the medicine cabinet.\n");
		printf("3. Inspect the bathtub.\n");
		printf("4. Leave the bathroom.\n");

		scanf("%d", &bathroomChoice);

		switch(bathroomChoice){
			case 1:
				printf("You check the mirror.\n");
				
				if(bathroomChecked == true){
					printf("The mirror is cracked, but there is nothing new to see.\n");
				} else {
					printf("A message is smeared across the mirror.\n");
					printf("\"The numbers are where he works.\"\n");
					bathroomChecked = true;
					
				}
				break;
			case 2:
				printf("You open the medicine cabinet.\n");

				if(noise < 25){
					printf("The cabinet door creaks loudly.\n");
					noiseLevel++;
				} else {
					printf("You find old medicine and nothing useful.\n");
				}
				break;
			case 3:
				printf("You inspect the bathtub.\n");

				if (noise < 25) {
					printf("Your foot slips against the tub and makes a loud thud.\n");
					noiseLevel++;
				} else {
					printf("The tub is stained and empty.\n");
				}
				break;
			case 4:
				printf("You leave the bathroom.\n");
				inBathroom = false;
				break;
			default:
				printf("Invalid selection.\n");
		}
		playerLose();
	}
}
//Study Room
void StudyRoom(void) {
	bool inStudyRoom = true;
	int studyChoice;
	visited[4] = 1;

	while (inStudyRoom && gamerunning){
		noise = generateRandomNoise();

		printf("You step into the study room.\n");
		printf("1. Search the desk\n");
		printf("2. Inspect the bookshelf\n");
		printf("3. Check the papers\n");
		printf("4. Leave the study room\n");

		scanf("%d", &studyChoice);

		switch(studyChoice){
			case 1:
				printf("You search the desk.\n");

				if (studyRoomChecked == true){
					printf("The desk has already been searched.\n");
				} else {
					if (noise < 25){
						printf("The desk drawer scrapes loudly.\n");
						noiseLevel++;
					} else {
						printf("You quietly open the drawer.\n");
					}

					printf("You find a slip of paper with a code written on it.\n");
					hasCode = true;
					studyRoomChecked = true;

				}
				break;
			case 2:
				printf("You inspect the bookshelf.\n");

				if (noise < 25){
					printf("A book slips loose and hits the floor.\n");
					noiseLevel++;
				} else {
					printf("You find old books and dusty folders, but nothing useful.\n");
				}
				break;
			case 3:
				printf("You check the papers.\n");

				
				if (noise < 25){
					printf("The papers rustle loudly in your hands.\n");
					noiseLevel++;
				} else {
					printf("Most of the papers are useless notes and old bills.\n");
				}
				break;

			case 4:
				printf("You leave the study room.\n");
				inStudyRoom = false;
				break;

			default:
				printf("Invalid Selection\n");
		}
		playerLose();
	}
}
void playerVictory(void){
	if (hasPhone && hasKey && hasCode){
		printf("You unlock the exit...\n");
		sleep(1);
		printf("You call the police...\n");
		sleep(1);
		printf("Larry Pope is arrested...\n");
		gamerunning = false;
	} else {
		printf("You are still missing something...\n");
	}
}
void playerLose(void){

	if (noiseLevel >= 3){
		printf("Larry wakes up.\n");
		sleep(1);
		printf("You were too loud.\n");
		sleep(1);
		printf("Game Over.\n");
		gamerunning = false;

	}
}
int generateRandomNoise(void) {
	int x = rand() % 101;
	return x;
}