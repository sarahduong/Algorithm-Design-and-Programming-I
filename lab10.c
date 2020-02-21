#include <stdio.h>

struct _Player
{
    char lastName[16];
    char firstName[16];
    int year;
    char team[16];
    float battingAverage;
    float onBasePercentage;
    float sluggingPercentage;
};


typedef struct _Player Player;

void PrintPlayerRecords(Player playerInfo[], int count);
void SortByBattingAverage(Player playerInfo[], int count);
void SortByOnBasePercentage(Player playerInfo[], int count);
void SortBySluggingPercentage(Player playerInfo[], int count);
void FilterByYear(Player playerInfo[], int count);
void FilterByYearCmd(Player playerInfo[], int count, int yearCmd);
void SwitchStats(Player playerInfo[], int count);

int main(int argc, char * argv[])
{
    Player playerInfo[24];

    FILE * fPtr = (fopen(argv[1], "r"));

    if(argv[1] == NULL)
    {
        printf("Syntax: ./a.out inputfile [filter year]\n");
    }
    else
    {
        int i = 0;
        while(!feof(fPtr))
        {
            fscanf(fPtr, "%s", playerInfo[i].lastName);
            fscanf(fPtr, "%s", playerInfo[i].firstName);
            fscanf(fPtr, "%d", &(playerInfo[i].year));
            fscanf(fPtr, "%s", playerInfo[i].team);
            fscanf(fPtr, "%f", &(playerInfo[i].battingAverage));
            fscanf(fPtr, "%f", &(playerInfo[i].onBasePercentage));
            fscanf(fPtr, "%f", &(playerInfo[i].sluggingPercentage));
            i++;
        }
        fclose(fPtr);

        if(argv[2] != NULL)
        {
            int year = atoi(argv[2]);
            FilterByYearCmd(playerInfo, 15, year);
        }    

        if(argv[2] == NULL)
        {
        // first printing of initial record
        printf("\n*** Initially\n\n");
        PrintPlayerRecords(playerInfo, 15);
        }


        int check = 1;
        while(check == 1)
        {
            int selection;
            printf("\n\n*************************\n");
            printf("*    Menu   *\n");
            printf("*************************\n");
            printf("1. Print Player Records\n");
            printf("2. Sort by Batting Average\n");
            printf("3. Sort by On-Base Percentage\n");
            printf("4. Sort by Slugging Percentage\n");
            printf("5. Filter by Year\n");
            printf("6. Exit\n");
            printf("**7. Toggle ascending/descending sort (currently Descending)\n");
            scanf("%d", &selection);

            int yearCMD;
            switch(selection)
            {
                case 1:
                {
                    PrintPlayerRecords(playerInfo, 15);
                    check = 1;
                    break;
                }
                case 2:
                {
                    SortByBattingAverage(playerInfo, 15);
                    check = 1;
                    break;
                }
                case 3:
                {
                    SortByOnBasePercentage(playerInfo, 15);
                    check = 1;
                    break;
                }
                case 4:
                {
                    SortBySluggingPercentage(playerInfo, 15);
                    check = 1;
                    break;
                }
                case 5:
                {
                    FilterByYear(playerInfo, 15);
                    check = 1;
                    break;
                }
                case 6: 
                {
                    check = 0;
                    break;
                }
                case 7:
                {
                    SwitchStats(playerInfo, 15);
                    break;
                }
                default:
                {
                    printf("Invalid selection made. Please select an option between 1 and 7\n");
                }
            }    
        } // end while
    } // end else
} // end main

void PrintPlayerRecords(Player playerInfo[], int count)
{
    int i;
    char * a[7] = {"First Name", "Last Name", "Team", "Year", "Batting Avg", "OnBase Pct", "Slugging Pct"};
    printf("%15s%15s%15s%12s%14s%14s%14s\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]); 
    
    for(i=0; i<count; i++)
    {
        printf("%15s", playerInfo[i].firstName);
        printf("%15s", playerInfo[i].lastName);
        printf("%15s", playerInfo[i].team);
        printf("%12d", playerInfo[i].year);
        printf("%14.3f", playerInfo[i].battingAverage);
        printf("%14.3f", playerInfo[i].onBasePercentage);
        printf("%14.3f\n", playerInfo[i].sluggingPercentage);
    }
}

void SortByBattingAverage(Player playerInfo[], int count)
{
    int i;
    int num;
    for(num = 0; num<count; num++)
    {
        for(i = 0; i<count-1; i++)
        {
            Player hold;
            int replace = 1;
            if(replace == 1 && playerInfo[i].battingAverage < playerInfo[i+1].battingAverage)
            {
                hold = playerInfo[i];
                playerInfo[i] = playerInfo[i+1];
                playerInfo[i+1] = hold;
                replace = 1;
            }
            if(replace != 1)
                break;
        }
    }
}

void SortByOnBasePercentage(Player playerInfo[], int count)
{
    int i;
    int num;
    for(num = 0; num<count; num++)
    {
        for(i = 0; i<count-1; i++)
        {
            Player hold;
            int replace = 1;
            if(replace ==1 && playerInfo[i].onBasePercentage < playerInfo[i+1].onBasePercentage)
            {
                hold = playerInfo[i];
                playerInfo[i] = playerInfo[i+1];
                playerInfo[i+1] = hold;
                replace = 1;
            }
            if(replace != 1)
                break;
        }
    }
}

void SortBySluggingPercentage(Player playerInfo[], int count)
{
    int i;
    int num;
    for(num = 0; num<count; num++)
    {
        for(i=0; i<count-1; i++)
        {
            Player hold;
            int replace = 1;
            if(replace == 1 && playerInfo[i].sluggingPercentage < playerInfo[i+1].sluggingPercentage)
            {
                hold = playerInfo[i];
                playerInfo[i] = playerInfo[i+1];
                playerInfo[i+1] = hold;
                replace = 1;
            }
            if(replace != 1)
                break;
        }
    }   
}

void FilterByYear(Player playerInfo[], int count)
{
    int year;
    printf("Enter the filter year: ");
    scanf("%d", &year);
    if(year != 2017 && year != 2018 && year != 2019)
    {
        printf("*** Error: Invalid filter specified. No filter set.\n\n");
    }
        
    if(year == 2017 || year == 2018 || year == 2019)
    {
        int i;
        char * a[7] = {"First Name", "Last Name", "Team", "Year", "Batting Avg", "OnBase Pct", "Slugging Pct"};
        printf("%15s%15s%15s%12s%14s%14s%14s\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);

        for(i = 0; i<count; i++)
        {
            if(year == playerInfo[i].year)
            {   
                printf("%15s", playerInfo[i].firstName);
                printf("%15s", playerInfo[i].lastName);
                printf("%15s", playerInfo[i].team);
                printf("%12d", playerInfo[i].year);
                printf("%14.3f", playerInfo[i].battingAverage);
                printf("%14.3f", playerInfo[i].onBasePercentage);
                printf("%14.3f\n", playerInfo[i].sluggingPercentage);
            }
        }
    }
}


void FilterByYearCmd(Player playerInfo[], int count, int yearCmd)
{
    if(yearCmd != 2017 && yearCmd != 2018 && yearCmd != 2019)
    {
        printf("*** Error: Invalid filter specified. No filter set.\n\n");
    }

    if(yearCmd == 2017 || yearCmd == 2018 || yearCmd == 2019)
    {
        int i;
        char * a[7] = {"First Name", "Last Name", "Team", "Year", "Batting Avg", "OnBase Pct", "Slugging Pct"};
        printf("%15s%15s%15s%12s%14s%14s%14s\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);

        for(i = 0; i<15; i++)
        {
            if(yearCmd == playerInfo[i].year)
            {
                printf("%15s", playerInfo[i].firstName);
                printf("%15s", playerInfo[i].lastName);
                printf("%15s", playerInfo[i].team);
                printf("%12d", playerInfo[i].year);
                printf("%14.3f", playerInfo[i].battingAverage);
                printf("%14.3f", playerInfo[i].onBasePercentage);
                printf("%14.3f\n", playerInfo[i].sluggingPercentage);
            }
        }
    }
}

void SwitchStats(Player playerInfo[], int count)
{
    int i = 1;
    // ASCENDING TO DESCENDING
    // BattingAvg currently ascending, switch to descending
    if(playerInfo[i].battingAverage<playerInfo[i+1].battingAverage && playerInfo[i+1].battingAverage<playerInfo[i+2].battingAverage && playerInfo[i+2].battingAverage<playerInfo[i+3].battingAverage && playerInfo[i+3].battingAverage<playerInfo[i+4].battingAverage)
    {
        int i;
        int num;
        for(num = 0; num<count; num++);
        {
            for(i=0; i<count-1; i++)
            {
                Player hold;
                int replace = 1;
                if(replace == 1 && playerInfo[i].battingAverage < playerInfo[i+1].battingAverage)
                {
                    hold = playerInfo[i];
                    playerInfo[i] = playerInfo[i+1];
                    playerInfo[i+1] = hold;
                    replace = 1;
                }
                if(replace != 1)
                    break;
            }
        }
    }
    // OnBasePct currenting ascending, switch to descending
    if(playerInfo[i].onBasePercentage<playerInfo[i+1].onBasePercentage && playerInfo[i+1].onBasePercentage<playerInfo[i+2].onBasePercentage && playerInfo[i+2].onBasePercentage<playerInfo[i+3].onBasePercentage && playerInfo[i+3].onBasePercentage<playerInfo[i+4].onBasePercentage)
    {
        int i;
        int num;
        for(num=0; num<count; num++)
        {
            for(i=0; i<count-1; i++)
            {
                Player hold;
                int replace = 1;
                if(replace == 1 && playerInfo[i].onBasePercentage < playerInfo[i+1].onBasePercentage)
                {
                    hold = playerInfo[i];
                    playerInfo[i] = playerInfo[i+1];
                    playerInfo[i+1] = hold;
                    replace = 1;
                }
                if(replace != 1)
                    break;
            }
        }
    }

    // Year currently ascending, switch to descending
    if(playerInfo[i].year<playerInfo[i+1].year && playerInfo[i+1].year<playerInfo[i+2].year && playerInfo[i+2].year<playerInfo[i+3].year && playerInfo[i+3].year<playerInfo[i+4].year)
    {
        int i;
        int num;
        for(num=0; num<count; num++)
        {
            for(i=0; i<count-1; i++)
            {
                Player hold;
                int replace = 1;
                if(replace == 1 && playerInfo[i].year < playerInfo[i+1].year)
                {
                    hold = playerInfo[i];
                    playerInfo[i] = playerInfo[i+1];
                    playerInfo[i+1] = hold;
                    replace = 1;
                }
                if(replace != 1)
                    break;
            }
        }
    }

    // BattingAvg currenting descending, switch to ascending
    if(playerInfo[i].battingAverage>playerInfo[i+1].battingAverage && playerInfo[i+1].battingAverage>playerInfo[i+2].battingAverage && playerInfo[i+2].battingAverage>playerInfo[i+3].battingAverage && playerInfo[i+3].battingAverage>playerInfo[i+4].battingAverage)
    {
        int i;
        int num;
        for(num = 0; num<count; num++)
        {
            for(i=0; i<count-1; i++)
            {
                Player hold;
                int replace = 1;
                if(replace == 1 && playerInfo[i].battingAverage > playerInfo[i+1].battingAverage)
                {
                    hold = playerInfo[i];
                    playerInfo[i] = playerInfo[i+1];
                    playerInfo[i+1] = hold;
                    replace = 1;
                }
                if(replace != 1)
                    break;
            }
        }
    }

    // OnBasePct current descending, switch to ascending
    if(playerInfo[i].onBasePercentage>playerInfo[i+1].onBasePercentage && playerInfo[i+1].onBasePercentage>playerInfo[i+2].onBasePercentage && playerInfo[i+2].onBasePercentage>playerInfo[i+3].onBasePercentage && playerInfo[i+3].onBasePercentage>playerInfo[i+4].onBasePercentage)
    {
        int i;
        int num;
        for(num=0; num<count; num++)
        {
            for(i=0; i<count-1; i++)
            {
                Player hold;
                int replace = 1;
                if(replace == 1 && playerInfo[i].onBasePercentage > playerInfo[i+1].onBasePercentage)
                {
                    hold = playerInfo[i];
                    playerInfo[i] = playerInfo[i+1];
                    playerInfo[i+1] = hold;
                    replace = 1;
                }
                if(replace != 1)
                    break;
            }
        }
    }

    // SluggingPct currently descending, switch to ascending
    if(playerInfo[i].sluggingPercentage>playerInfo[i+1].sluggingPercentage && playerInfo[i+1].sluggingPercentage>playerInfo[i+2].sluggingPercentage && playerInfo[i+2].sluggingPercentage>playerInfo[i+3].sluggingPercentage && playerInfo[i+3].sluggingPercentage>playerInfo[i+4].sluggingPercentage)
    {
        int i;
        int num;
        for(num=0; num<count; num++)
        {
            for(i=0; i<count-1; i++)
            {
                Player hold;
                int replace = 1;
                if(replace == 1 && playerInfo[i].sluggingPercentage > playerInfo[i+1].sluggingPercentage)
                {
                    hold = playerInfo[i];
                    playerInfo[i] = playerInfo[i+1];
                    playerInfo[i+1] = hold;
                    replace = 1;
                }
                if(replace != 1)
                    break;
            }
        }
    }
    
    // SluggingPct currently ascending, switch to descending
    if(playerInfo[i].sluggingPercentage<playerInfo[i+1].sluggingPercentage && playerInfo[i+1].sluggingPercentage<playerInfo[i+2].sluggingPercentage && playerInfo[i+2].sluggingPercentage<playerInfo[i+3].sluggingPercentage && playerInfo[i+3].sluggingPercentage<playerInfo[i+4].sluggingPercentage)
    {
        int i;
        int num;
        for(num=0; num<count; num++)
        {
            for(i=0; i<count-1; i++)
            {
                Player hold;
                int replace = 1;
                if(replace == 1 && playerInfo[i].sluggingPercentage < playerInfo[i+1].sluggingPercentage)
                {
                    hold = playerInfo[i];
                    playerInfo[i] = playerInfo[i+1];
                    playerInfo[i+1] = hold;
                    replace = 1;
                }
                if(replace != 1)
                    break;
            }
        }
    }

    // Year currenting descending, switch to ascending
    if(playerInfo[i].year>playerInfo[i+1].year && playerInfo[i+1].year>playerInfo[i+2].year && playerInfo[i+2].year>playerInfo[i+3].year && playerInfo[i+3].year>playerInfo[i+4].year)
    {
        int i;
        int num;
        for(num=0; num<count; num++)
        {
            for(i=0; i<count-1; i++)
            {
                Player hold;
                int replace = 1;
                if(replace == 1 && playerInfo[i].year > playerInfo[i+1].year)
                {
                    hold = playerInfo[i];
                    playerInfo[i] = playerInfo[i+1];
                    playerInfo[i+1] = hold;
                    replace = 1;
                }
                if(replace != 1)
                    break;
            }
        }
    }
}
