/* 													PROJECT PRESENTATION
														   
														   OBJECTIVE
									This project  is to build an automatic voting stystem 

----------------------------------------------------------------------------------------------------------------------------------------------------	
														 PROJECT SCOPE
							      This project should be completely ended by the en of February
		
----------------------------------------------------------------------------------------------------------------------------------------------------
													   PROJECT DESCRIPTION
							- First, when the user comes he is welcomed to the voting system, with players in east
							- We ask the voter his name surname and id number
							- Second he is asked to type where he wanted to vote, East or West
							- Then after that, he is aked to put it the name of the player he wanted to vote 
							- He is then asked if he wants to vote in West as well (if has choosed East first)  


-------------------------------------------------------------------------------------------------------------------------------------------------------

														MAIN FEATURES 
					- Ability for system manager to store players and classify them into east and west 
					- Ability for users to vote players in west and east
					- Only one vote possible per user
					- User are identified by their names, their surnames, their id card, and their address
					- Votes are counted for each players. The one with the most votes has the captain badge near his name
					- Votes are registred into a file where it is mentionned their names and players they voted for 

--------------------------------------------------------------------------------------------------------------------------------------------------------
- 



*/


#include <stdio.h>




int main(int argc, char *argv[])
{

	printf("WELCOME TO THE NBA ALL STAR GAME VOTING SYSTEM\n");
	printf("--------------------------------------------\n");
	printf("These are players' list in the west and in the east\n");
	int playersEastCount[] = {1, 2, 3, 4, 5, 6};
	int playersWestCount[] = {1, 2, 3, 4, 5, 6}; 
	char *playersListEast[] = {"Giannis Antetokounpo", "Kevin Durant", "Kyrie Irving", "Luka Doncic", "Zion Williamson", "Ja Morant"};
	char *playersListWest[] = {"Lebron James", "Anthony Davis", "Russel Westbrook", "Rui Hachimura", "Anthony Edwards", "Jason Tatum"};
	
	printf("----------Players in the East------------\n");
	

	int eastCount = sizeof(playersListEast)/sizeof(char*);
	int i=0;
	for (i=0; i<eastCount; i++)
	{
		printf("%d* %s\n", playersEastCount[i], playersListEast[i]);
	}

	printf("----------Players in the West-------------\n");
	
	
	i = 0;
	int westCount = sizeof(playersListWest)/sizeof(char*);
	for(i=0; i<westCount; i++)
	{
		printf("%d* %s\n", playersWestCount[i], playersListWest[i]);
	}



	printf("----------Players in the West-------------\n");


	printf("I'll need you to put in your personal details\n");
	printf("Your details will be used for the transparence of the voting process\n");
	printf("Do you agree? Y/N:");
	
	char agreement;


	scanf("%s", &agreement);
	while (agreement == 'Y')
	{
		char uName[15];// Contains the name of the voter 
		char uSurname[25];
		int idCardNumber;
		char votedPlayerS[15]; // This is to stock the the Surname of the player the user voted for to report it later in a sheet
		char votedPlayerL[15];// This is to stock the Lastname player the user voted for to report it later in a sheet
		


		printf("\nType your name:");
		scanf("%s", uName);
		printf("\nYour surname now:");
		scanf("%s", uSurname);
		printf("Your complete name is: %s %s\n", uName,uSurname);
		printf("Type your id card:");
		scanf("%d", &idCardNumber);
		printf("Vote your Fav Player in the by typing his name\n");// Should be first, your player in the east and then, your player in the west
		printf("His surname is:");
		scanf("%s", votedPlayerS);
		printf("His last name is:");
		scanf("%s",votedPlayerL);
		printf("The player you're voting is : %s %s\n",votedPlayerS, votedPlayerL);
		printf("VOTE COMPLETED, THANK YOU");
		return 0;
		//char * votedPlayerC[] = {"*votedPlayerS *votedPlayerL"};
		// if( *votedPlayerC!=*playersListEast[i]) [ Search algorithm in the array of players list to see if this player really belongs to the East list or not ]


	}


	return 0;

}

