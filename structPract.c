#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pitcher
{
    char FirstName[256];
    char LastName[256];
    int Age;
    float Velocity;
    char Gender;
};

void PrintPitcher(struct Pitcher * p);
void PrintPitchers(struct Pitcher p[], int size);

int main(void)
{
    struct Pitcher pitcherInfo[10];
    struct Pitcher * pitcher3 = &(pitcherInfo[1]);

    // array 0th element of struct
    strcpy(pitcherInfo[0].FirstName,"Jim"); // must use strcpy for array
    strcpy(pitcherInfo[0].LastName,"Ries");
    pitcherInfo[0].Age = 52;
    pitcherInfo[0].Velocity = 65.0;
    pitcherInfo[0].Gender = 'M';

    // pointer to second _Pitcher array struct
    pitcher3->FirstName[0] = 'J';
    pitcher3->FirstName[1] = '\0';
    strcpy(pitcher3->LastName,"Ries");
    pitcher3->Age = 26;
    pitcher3->Velocity = 100.0;
    pitcher3->Gender = 'F';

    PrintPitchers(pitcherInfo, 10);
}

void PrintPitchers(struct Pitcher p[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        PrintPitcher(&(p[i]));
    }
}

void PrintPitcher(struct Pitcher * p)
{
    printf("\n******************\n");
    printf("First Name: %s\n", p->FirstName);
    printf("Last Name: %s\n", p->LastName);
    printf("Age: %d\n", p->Age);
    printf("Velocity: %f\n", p->Velocity);
}




