# include <stdio.h>
# include <assert.h>
# include <stdlib.h>
# include <string.h>

// Creating a basketball player 

struct player
{
	char *name;
	int age;
	float height; // Heights are floating point values 
	float wingspan;	// Wingspans are floating point values
};

struct stat
{
	char *name;
	int min;
	int points;
	int assists;
	int rebounds;
};

struct player *profilCreator(char *name,int age,float height,float wingspan)
	{

			struct player *who = malloc (sizeof (struct player));
			assert ( who != NULL);
			who-> name = strdup(name); // arrays of char should be duplicated before assignment, strdup is for string duplication
			who-> age = age;
			who-> height = height;
			who-> wingspan = wingspan;

			printf("%s\t\t %d\t %f\t %f\n",who->name, who->age, who-> height,who-> wingspan);
			
			return who;

	}	

// Pointer on struct; function to create a struct
struct stat *statRecorder(char* name, int min, int points, int assists, int rebounds)
	{

			struct stat *stats = malloc (sizeof (struct stat));
			assert ( stats != NULL); // checks if the memory has been successfully allocated
			stats -> name = strdup(name);// arrays of char should be duplicated before assignment, strdup is for string duplication
			stats -> min = min;
			stats -> points = points;
			stats -> assists = assists;
			stats -> rebounds = rebounds;

			printf("%s\t %d\t %d\t %d\t %d\n",stats->name, stats->min, stats->points, stats -> assists, stats -> rebounds);
			
			return stats;
	}

// Function to free memory allocated by strdup and malloc  to avoid memoory leak
void statDestroy(struct stat *stats)
{
	assert(stats!=NULL);
	free(stats->name);
	free (stats);
}

// Function to free up memory allocated by strdup and malloc to avoid memoory leak
void playerDestroy(struct player *who)
{
	assert(who!=NULL);
	free(who->name);
	free(who);
}

int main ()
{
	printf("Name \t\t Age\t Height\t Wingspan\n");

	struct player *Wemby = profilCreator("Wemby", 19, 2.19, 3);
	playerDestroy(Wemby);

	struct player *Lebron = profilCreator("Lebron",38, 2.05, 2.5);
	playerDestroy(Lebron);


	printf("---------------------------------\n");
	printf("Name\t Min\t Points\t Assists\t Rebounds\n");
	struct stat *Wembys = statRecorder("Wemby", 22, 30, 10, 10);
	statDestroy(Wembys);
	
	struct stat *Lebrons = statRecorder("Lebron", 30, 40, 10, 9);
	statDestroy(Lebrons);
	
	return 0;
 
}
