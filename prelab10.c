#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct _Player// struct name: Player
{
    char lastName[16];
    char firstName[16];
    int year;
    char team[16];
    float battingAverage;
    float onBaseAverage;
    float sluggingPercentage;
};

typedef struct _Player Player;

void PrintPlayerFile(Player playerInfo[], int count);
void SortPlayerFile(Player playerInfo[], int count);

int main()
{
    Player playerInfo[24];

    FILE * fPtr;
    fPtr = (fopen("prelab10.dat", "r"));

    if(fPtr == NULL)
    {
        printf("\nError: File could not be opened\n");
    }
    else
    {
    // read file
        int i = 0;
        while(!feof(fPtr))
        {
            fscanf(fPtr, "%s", playerInfo[i].lastName);
            fscanf(fPtr, "%s", playerInfo[i].firstName);
            fscanf(fPtr, "%d", &(playerInfo[i].year));
            fscanf(fPtr, "%s", playerInfo[i].team);
            fscanf(fPtr, "%f", &(playerInfo[i].battingAverage));
            fscanf(fPtr, "%f", &(playerInfo[i].onBaseAverage));
            fscanf(fPtr, "%f", &(playerInfo[i].sluggingPercentage));
            i++;
        }
    fclose(fPtr);
    printf("\n\n*** Original File:\n");
    PrintPlayerFile(playerInfo, 15);
    SortPlayerFile(playerInfo, 15);
    printf("\n\n*** Sorted by On-Base Pct:\n");
    PrintPlayerFile(playerInfo, 15);
    }
}

void PrintPlayerFile(Player playerInfo[], int count)
{
    int i;
    char *a[7] = {"First Name", "Last Name", "Team", "Year", "Batting Avg", "OnBase Pct", "Slugging Pct"};
    printf("%16s%16s%16s%12s%14s%14s%14s\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
    for(i=0; i<count; i++)
    {
        printf("%16s", playerInfo[i].firstName);
        printf("%16s", playerInfo[i].lastName);
        printf("%16s", playerInfo[i].team);
        printf("%12d", playerInfo[i].year);
        printf("%14.3f", playerInfo[i].battingAverage);
        printf("%14.3f", playerInfo[i].onBaseAverage);
        printf("%14.3f\n", playerInfo[i].sluggingPercentage);
    }
}

void SortPlayerFile(Player playerInfo[], int count)
{
    int i;
    int p;
    for(p=0; p<count; p++)
    {
        for(i = 0; i<count-1; i++)
        {
            Player temp;
            int replace = 1;
            if(replace == 1 && playerInfo[i].onBaseAverage < playerInfo[i+1].onBaseAverage)
            {
                temp = playerInfo[i];
                playerInfo[i] = playerInfo[i+1];
                playerInfo[i+1] = temp;
                replace = 1;
            }
            if(replace != 1)
                break;
        }
    }
}
