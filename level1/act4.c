/*Develop a modular C program to manage a team of 11 cricket players and calculate the average runs of the team. Create a structure Player with the following members:
player_name
jersey_number
runs_scored
Create an array of 11 players. Write a program that:
1.Reads the details of all 11 players.
2.Calculates and displays the average runs scored by the team.
Function prototype:
void readPlayers(int n, Player p[]);
float calculateAverageRuns(int n, Player p[]);
*/
#include <stdio.h>

typedef struct {
    char player_name[30];
    int jersey_number;
    int runs_scored;
} Player;

void readPlayers(int n, Player p[]);
float calculateAverageRuns(int n, Player p[]);

int main() {
    int n=11;
   Player p[n];
   readPlayers(n,p);
   float avg=calculateAverageRuns(n,p);
   
    printf("Average Runs: %.2f\n", avg);

    return 0;
}

void readPlayers(int n, Player p[]) {
int i=0;
for(i=0;i<n;i++){
     printf("ENTER THE NAME OF THE PLAYER  ");
   
    fgets(p[i].player_name,sizeof(p[i].player_name),stdin);
   
    printf("ENTER THE JERSEY NUMBER OF %d player\n");
scanf("%d",&p[i].jersey_number);
printf("ENTER THE RUNS SCORED BY HIM ");
scanf("%d",&p[i].runs_scored);
}


}

float calculateAverageRuns(int n, Player p[]) {
  
int i=0;
float average;
int sum;
for(i=0;i<n;i++){
    sum=sum+p[i].runs_scored;
}
average=sum/n;
    return average;
}

