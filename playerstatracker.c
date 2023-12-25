# include <stdio.h>
# include <assert.h>
# include <stdlib.h>
# include <string.h>

// Creating a basketball player 

struct player
{
	char *name;
	int age;
	float height;
	float wingspan;	
};

struct stat
{
	char *name;
	int min;
	int points;
	int assists;
	int rebounds;
};

struct player profilCreator(char *name,int age,float height,float wingspan)
	{

			struct player *who = malloc (sizeof (struct player));
			assert ( who != NULL);
			who-> name = strdup(name);
			who-> age = age;
			who-> height = height;
			who-> wingspan = wingspan;

			printf("%s\t\t %d\t %f\t %f\n",who->name, who->age, who-> height,who-> wingspan);
			free(who);
	};	

struct stat statRecorder(char* name, int min, int points, int assists, int rebounds)
	{

			struct stat *stats = malloc (sizeof (struct stat));
			assert ( stats != NULL);
			stats -> name = strdup(name);
			stats -> min = min;
			stats -> points = points;
			stats -> assists = assists;
			stats -> rebounds = rebounds;

			printf("%s\t %d\t %d\t %d\t %d\n",stats->name, stats->points,stats -> assists, stats -> rebounds);
			free(stats);
	};	



int main ()
{
	printf("Name \t\t Age\t Height\t Wingspan\n");
	profilCreator("Wemby", 19, 2.19, 3);
	profilCreator("Lebron",38, 2.05, 2.5);


	printf("---------------------------------\n");
	printf("Name\t Min\t Points\t Assists\t Rebounds\n");
	statRecorder("Wemby", 22, 30, 10, 10);
	statRecorder("Lebron", 30, 40, 10, 9);
	
	return 0;
 
}