#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define numberOfTeams 4

// BASGOD is a game for basketball fans
/*The Principle is simple : BASGOD can predict the champion of the season, the score gap,
the MVP's name, how many points he has scored. 
BASGOD challenges you to threat him of being able to do as good predictions as he could*/

 int main ()
{
// Guessed variables declaration to stock the guesses data

char guessedTeamName[10];
int guessedScorDiff;
char mvpName[10];
int guessedmvpoints;

// Request the user to enter values 

printf("Teams list is:\n ---Milwaukee----\n ---Lakers---\n ---Boston---\n ---Denver---\n");
printf("\nType in the guessed Team's name:");
scanf ("%s",&guessedTeamName);

printf("Score diff range from 1 to 100 in NBA story :\n");
printf("Type in the guessed score difference:");
scanf ("%s",&guessedScorDiff);

printf("MVP Candidates from every team:\n ---Milwaukee(Giannis, Lillard)---\n ---Lakers(Lebron, Davis)---\n ---Boston(Brown, Tatum)---\n ---Denver(Murray, Jokic)---");
printf("Type in the guessed MVP Name:");
scanf ("%s",&mvpName);

printf("Most points by an MVP in NBA history is 100\n");
printf("Type the MVP's points count:");
scanf ("%s",&guessedmvpoints);

// registration of data to choose from for the guess 

char teamsList[numberOfTeams][10] = {"Milwaukee","Lakers","Boston","Denver"};
// Players that could win  MVP from each team

char Boston[8][8]            = {"Brown","Tatum"};
char Denver[8][8]            ={"Murray","Jokic"};
char Lakers[8][8]            = {"Lebron","Davis"};
char Milwaukee[8][8]         = {"Giannis","Lillard"};


// Guessed by laptop values. cGUessed mean guessed by a computer
// Guess of the team's name 

srand(time(NULL));

int i = rand()%(numberOfTeams);
char cGuessedTeamName[10] ;
strcpy(cGuessedTeamName,teamsList[i]);
int  cGuessedScorediff = 10;
char cGuessedMvpname[8];

// Guessed Score should be between 100 and 200

do 
{
cGuessedScorediff = rand()%100+1 ;

} while (cGuessedScorediff<101 && cGuessedScorediff>201);

//Guess the team that would win the chip's name

if(strcmp(teamsList[i],"Boston")==0)
{
strcpy(cGuessedMvpname,Boston[rand()%2]);    
}
else if (strcmp(teamsList[i],"Denver")==0)
{
    strcpy(cGuessedMvpname,Denver[rand()%2]);
}
else if (strcmp(teamsList[i],"Milwaukee")==0)
{
    strcpy(cGuessedMvpname,Milwaukee[rand()%2]);
}
else if(strcmp(teamsList[i],"Lakers")==0)
{   
    strcpy(cGuessedMvpname,Lakers[rand()%2]);
}


int cguessedmvpoints = 0;

do 
{
 cguessedmvpoints = rand()%150+1 ; // Guessed MVP score should be between 25 and 100

}
while (cguessedmvpoints<25 ||cguessedmvpoints>100);

// Let's now compare the guessed value by the user to the guessed value by the the computer 

if (cguessedmvpoints==guessedmvpoints && cGuessedTeamName == guessedTeamName && cGuessedScorediff==guessedScorDiff && cGuessedMvpname==mvpName)
{
    printf("You are an underrated genius my G, You got it!/n");

}
else 
{
    printf("You are not dumb, BASGOD is the only GOD but that can predicts the actual outcome of the NBA season\n");
    printf("Championship Team:%s\t ScoreDiff:%d\t MVP:%s\t MVP Points:%d" , cGuessedTeamName, cGuessedScorediff,cGuessedMvpname, cguessedmvpoints);
}

return 0;
}
