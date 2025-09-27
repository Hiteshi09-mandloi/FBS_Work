#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #define MAX_PLAYERS 100

// Structure to hold player info
struct Player {
    int jerseyNo;          
    char name[50];
    int runs;
    int wickets;
    int matches;
};

// Global array of players
struct Player *players;
int playerCount = 0; //its use for count the playesr
int capacity=0;// capacity how many players are there



//Function prototypes
void addPlayer();
void removePlayer();
void searchPlayer();
void updatePlayer();
void displayAllPlayers();
void displaySortedPlayers();
void displayTop3();
void calculateBattingAverage();


// Add player
void addPlayer(){
   if (playerCount >= capacity) {
        capacity *= 2; // double the size
        players = (struct Player*) realloc(players, capacity * sizeof(struct Player));
        if (players == NULL) {
            printf("Memory reallocation failed!\n");
            exit(1);
        }
        printf("Memory expanded, new capacity = %d\n", capacity);
    }
    struct Player p;
    
    printf("Enter Jersey Number: ");
    scanf("%d", &p.jerseyNo);
    getchar(); 
    printf("Enter Name: ");
    //scanf("%s",p.name) ;
   //scanf(" %[^\n]", p.name); 
   gets(p.name);
    printf("Enter Runs: ");
    scanf("%d", &p.runs);
    printf("Enter Wickets: ");
    scanf("%d", &p.wickets);
    printf("Enter Matches Played: ");
    scanf("%d", &p.matches);

    players[playerCount] = p;
    playerCount++;
    printf("Player added successfully!\n");
}

// Remove player by Jersey Number
void removePlayer() {
    int jersey, i, found = 0;
//    printf("Enter Jersey Number to remove: ");
//    scanf("%d", &jersey);

    for (i = 0; i < playerCount; i++) {
    	printf("Enter Jersey Number: ");
            scanf("%d", &jersey);
        if(players[i].jerseyNo != jersey){
            printf("%d jerseyNo is not there",jersey);
            printf("Enter Jersey Number: ");
            scanf("%d", &jersey);
		}
        if (players[i].jerseyNo == jersey) {
            found = 1;
            int j;
            for ( j = i; j < playerCount - 1; j++) {
                players[j] = players[j + 1];
            }
            playerCount--;
            printf("Player removed successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Player not found!\n");
    }
}

// Search player by Jersey No or Name
void searchPlayer() {
    int option, jersey, i, found = 0;
    char name[50];
    printf("Search by: 1. Jersey Number  2. Name\n");
    scanf("%d", &option);

    if (option == 1) {
    print:
    	printf("Enter Jersey Number: ");
    	scanf("%d", &jersey);

        for (i = 0; i < playerCount; i++) {
        	
        	if(players[i].jerseyNo != jersey){
            	printf("%d jerseyNo is not there\n",jersey);
            	goto print;
			}
        	
            if (players[i].jerseyNo == jersey) {
                printf("Player Found:\n JerseyNo: %d\n Name: %s\n Runs:%d\n Wickets:%d\n Matches:%d\n",
                       players[i].jerseyNo, players[i].name,
                       players[i].runs, players[i].wickets, players[i].matches);
            	printf("---------------------------------------");
                found = 1;
                break;
            }
        }
    } else {
    name:
		printf("Enter Name: ");
        scanf(" %[^\n]", name);
        for (i = 0; i < playerCount; i++) {
        	
            if(strcmp(players[i].name, name) != 0){
            	printf("%s Name is not there\n",name);
            	goto name;
			}
            if (strcmp(players[i].name, name) == 0) {
                printf("Player Found:\n JerseyNo: %d\n Name: %s\n Runs:%d\n Wickets:%d\n Matches:%d\n",
                       players[i].jerseyNo, players[i].name,
                       players[i].runs, players[i].wickets, players[i].matches);
                printf("---------------------------------------");
                found = 1;
                break;
            }
        }
    }
    if (!found) printf("Player not found!\n");
}

// Update player stats (pass by reference)
void updatePlayerbyreference(struct Player *p) {
    printf("Enter new Runs: ");
    scanf("%d", &p->runs);

    printf("Enter new Wickets: ");
    scanf("%d", &p->wickets);

    printf("Enter new Matches: ");
    scanf("%d", &p->matches);

    printf("Player updated successfully!\n");
}

void updatePlayer() {
    int jersey, i, found = 0;
   print:
   		printf("Enter Jersey Number to update: ");
   		scanf("%d", &jersey);

    for (i = 0; i < playerCount; i++) {
    
        if(players[i].jerseyNo != jersey){
            printf("%d jerseyNo is not there\n",jersey);
            goto print;
		}
        if (players[i].jerseyNo == jersey) {
            updatePlayerbyreference(&players[i]); // pass by reference
            found = 1;
            break;
        }
    }

    if (found==0)
        printf("Player not found!\n");
}


// Display all players
void displayAllPlayers() {
    if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }
    printf("\nAll Players:\n");
    int i;
    for (i = 0; i < playerCount; i++) {
        printf("Player Found:\n JerseyNo: %d\n Name: %s\n Runs:%d\n Wickets:%d\n Matches:%d\n",
               players[i].jerseyNo, players[i].name,
               players[i].runs, players[i].wickets, players[i].matches);
        printf("---------------------------------------\n");
    }
}

// Sort players by runs/wickets
void displaySortedPlayers() {
    int option;
    printf("Sort by: 1.Min Runs  2.Max Runs  3.Min Wickets  4.Max Wickets\n");
    scanf("%d", &option);
	int i;
    for (i = 0; i < playerCount - 1; i++) {
    	int j;
        for (j = i + 1; j < playerCount; j++) {
            int swap = 0;
            if ((option == 1 && players[i].runs > players[j].runs) ||
                (option == 2 && players[i].runs < players[j].runs) ||
                (option == 3 && players[i].wickets > players[j].wickets) ||
                (option == 4 && players[i].wickets < players[j].wickets)) {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    displayAllPlayers();
}


void byRun(){
	 if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }

    // Sort players by runs (descending order)
    int i,j;
    for (i = 0; i < playerCount - 1; i++) {
        for (j = i + 1; j < playerCount; j++) {
            if (players[i].runs < players[j].runs) {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    // Display Top 3
    printf("\nTop 3 Players (by Runs):\n");
    for (i = 0; i < playerCount && i < 3; i++) {
        printf("Player Found:\n JerseyNo: %d\n Name: %s\n Runs:%d\n Wickets:%d\n Matches:%d\n",
               players[i].jerseyNo, players[i].name,
               players[i].runs, players[i].wickets, players[i].matches);
    }

}


void byWickets(){
    if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }
    int i,j;
    // Sort players by wickets (descending order)
    for (i = 0; i < playerCount - 1; i++) {
        for (j = i + 1; j < playerCount; j++) {
            if (players[i].wickets < players[j].wickets) {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    // Display Top 3
    printf("\nTop 3 Players (by Wickets):\n");
    for (i = 0; i < playerCount && i < 3; i++) {
        printf("Player Found:\n JerseyNo: %d\n Name: %s\n Runs:%d\n Wickets:%d\n Matches:%d\n",
               players[i].jerseyNo, players[i].name,
               players[i].runs, players[i].wickets, players[i].matches);
    }
}
// Display Top 3 players
void displayTop3() {
     printf("Display top 3 players.../n 1.By Run 2.By Wicket\n");
     printf("Enter choice: ");
     int c;
     scanf("%d",&c);
      switch (c) {
            case 1: byRun(); break;
            case 2: byWickets(); break;
            default: printf("Invalid choice!\n");
        }
}

// Function to calculate batting average by searching player
void calculateBattingAverage() {
    int option, jersey, i, found = 0;
    char name[50];

    printf("Calculate Batting Average by: 1. Jersey Number  2. Name\n");
    scanf("%d", &option);

    if (option == 1) {
    print:
         printf("Enter Jersey Number: ");
         scanf("%d", &jersey);
        for (i = 0; i < playerCount; i++) {
         
            if(players[i].jerseyNo != jersey){
            	printf("%d jerseyNo is not there\n",jersey);
            	goto print;
			}
            if (players[i].jerseyNo == jersey) {
                if (players[i].matches > 0) {
                    float avg = (float)players[i].runs / players[i].matches;
                    printf("Batting Average of %s (Jersey %d) = %f\n",
                           players[i].name, players[i].jerseyNo, avg);
                } else {
                    printf("No matches played, average = 0\n");
                }
                found = 1;
                break;
            }
        }
    } else if (option == 2) {
    name:
        printf("Enter Name: ");
        scanf(" %[^\n]", name);
        for (i = 0; i < playerCount; i++) {
        	
            if(strcmp(players[i].name, name) != 0){
            	printf("%s Name is not there\n",name);
            	goto name;
			}
            if (strcmp(players[i].name, name) == 0) {
                if (players[i].matches > 0) {
                    float avg = (float)players[i].runs / players[i].matches;
                    printf("Batting Average of %s (Jersey %d) = %f\n",
                           players[i].name, players[i].jerseyNo, avg);
                } else {
                    printf("No matches played, average = 0\n");
                }
                found = 1;
                break;
            }
        }
    }

    if (found==0) {
        printf("Player not found!\n");
    }
}

void main() {
	capacity = 5;
	players = (struct Player*)malloc(capacity * sizeof(struct Player));
    if (players == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    
	players[0].jerseyNo=1;
	strcpy(players[0].name,"Ram");
	players[0].runs=70;
	players[0].wickets=1;
	players[0].matches=3;
	
	players[1].jerseyNo=2;
	strcpy(players[1].name,"Rohit");
	players[1].runs=70;
	players[1].wickets=1;
	players[1].matches=3;
	playerCount = 2;
	
	
    int choice;
    while (1) {
        printf("\n--- Player Management System ---\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player Data\n");
        printf("5. Display All Players\n");
        printf("6. Display Sorted Players\n");
        printf("7. Display Top 3 Players\n");
        printf("8. Calculate Batting Average\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addPlayer(); break;
            case 2: removePlayer(); break;
            case 3: searchPlayer(); break;
            case 4: updatePlayer(); break;
            case 5: displayAllPlayers(); break;
            case 6: displaySortedPlayers(); break;
            case 7: displayTop3(); break;
            case 8: calculateBattingAverage(); break;
            case 9: return;
            default: printf("Invalid choice!\n");
        }
    }

}


