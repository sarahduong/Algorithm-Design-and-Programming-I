#include<stdio.h>
#define LIMIT 7 // set LIMIT symbolic constant to 7

// Function Prototypes
void InitArrayQuad(int array[], int size); 
void InitArrayDoubled(int array[], int size);
void PrintArray(int array[], int size);
void SumArrays(int arrayIn1[], int arrayIn2[], int arrayOut[], int size);
void MultArrays(int array1[], int array2[], int arrayOut[], int size);

// Global declaration of "x" to use in functions
int x;

// begin main function
int main(void)
{
    int array1[LIMIT]; // create and define size for array 1
    int array2[LIMIT]; // create and define size for array 2

    // call to do calculations for arrays
    InitArrayQuad(array1, LIMIT);   
    InitArrayDoubled(array2, LIMIT); 

    // print array message and call to print array values
    printf("\nArray 1:\n ");
    PrintArray(array1, LIMIT); 
   
    printf("\nArray 2:\n ");
    PrintArray(array2, LIMIT); 
    

    int sum[LIMIT]; // define array size for sum
    SumArrays(array1, array2, sum, LIMIT); // call for sum function
    
    int multiply[LIMIT]; // define array size for mutiplication
    MultArrays(array1, array2, multiply, LIMIT); // call for multiplication function


    printf("\nSum of array1 and array2: \n"); // print message for sum of arrays
    PrintArray(sum, LIMIT); // call function to print values
    
    printf("\nProduct of array1 and array2: \n"); // print message for product of arrays
    PrintArray(multiply, LIMIT); // call function to print product
    printf("\n");
} // end main function


void InitArrayQuad(int array[], int size)
{
    for(x=0; x<size; x++) 
    {
        array[x]=x*x*x*x; // raise to 4th power input values for array 1, store in array
    }
}


void InitArrayDoubled(int array[], int size)
{
    for(x=0; x<size; x++)
    {
        array[x]=(x)*(2); // double input values for array 2, store in array
    }
}


void PrintArray(int array[], int size)
{
    for(x=0; x<size; x++)
    {
        printf("\t%d\n", array[x]); // printing values in array
    }
}


void SumArrays(int arrayIn1[], int arrayIn2[], int arrayOut[], int size)
{
    for(x=0; x<size; x++)
    {
        arrayOut[x] = arrayIn1[x]+arrayIn2[x]; // adding two arrays together and store value in arrayOut
    }
}

void MultArrays(int array1[], int array2[], int arrayOut[], int size)
{
    for(x=0; x<size; x++)
    {
        arrayOut[x] = array1[x]*array2[x]; // multiplying two arrays together and store value
    }
}
