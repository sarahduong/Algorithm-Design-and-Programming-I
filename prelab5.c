#include<stdio.h>
#define ARRAY_SIZE 5
void EnterDistances(int array[], int size);
float AverageDistance(int array[], int size);
void PrintDistances(int array[], int size);

int main()
{
    printf("\nWelcome to the Distances Program\n\n");
    int myarray[ARRAY_SIZE];
    EnterDistances(myarray, ARRAY_SIZE);
}

void EnterDistances(int array[], int size)
{
    int count=0;
    for(ARRAY_SIZE=0; ARRAY_SIZE<=4; size++)
    {
    count++;
    printf("Please enter distance #%d and then hit enter:  ", count);
    scanf("%d", &array[size]);    
        if(size==4)
        {
            PrintDistances(array,size);
        }
    }
}

float AverageDistance(int array[], int size)
{   
    float total;
    float average;
    total = array[0] + array[1] + array[2] + array[3] + array[4];
    average = total/5;
    printf("Average distance=%.2f\n\n", average);
    printf("\n\nThank you for using the Distances program!\n");
}

void PrintDistances(int array[], int size)
{
    int x=1;   
    for(size=0; size<=4; size++)
    {
        x++;
        printf("Distance #%d: %d\n", x, array[size]);
    }
    
    AverageDistance(array, size);
}
