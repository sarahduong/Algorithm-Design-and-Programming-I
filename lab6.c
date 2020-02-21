#include<stdio.h>

void GetPromptString(char * output);
void PromptAndGetInt(char * prompt, int * output, int lowerlimit, int upperlimit);
void GetRemainder(int dividend, int divisor, int * remainder);

// begin main
int main(void)
{
    // header messsage 
    printf("\n");
    printf("* * * * * * * * * * * *\n");
    printf("*  Welcome to Lab 6!  *\n");
    printf("* * * * * * * * * * * *\n\n");

    char x[32]; // array maximum of 31 characters, 32 with null terminator
        printf("Enter the prompt for the first variable: ");
        GetPromptString(x); // pass array to function to get string 1

    char y[32]; // array maximum of 31 characters, 32 with null terminator
        printf("Enter the prompt for the second variable: ");
        GetPromptString(y); // pass array to function to get string 2

    int divisor;
    int dividend;

    int lowerlimitinput;
        lowerlimitinput = -123; // set lower range
    int upperlimitinput;
        upperlimitinput = 71; // set upper range
        PromptAndGetInt(x, &dividend, lowerlimitinput, upperlimitinput);

    int lowint = -5;
    int highint = 6;
        PromptAndGetInt(y, &divisor, lowint, highint);
    
    int remainder;
    GetRemainder(dividend, divisor, &remainder);
        printf("\nThe remainder of %d and %d is %d\n", dividend, divisor, remainder);
        printf("\n* * * * * * * * * * * *"); // end of message styling
        printf("\n\n");
} // end main


// function to get string from user
void GetPromptString(char * output)
{
    scanf("%s", output); // scan in values for string, 31 char max
}


// function to get dividend and divisor from user
void PromptAndGetInt(char * prompt, int * output, int lowerlimit, int upperlimit)
{
    int loop; // local var
    for(loop=0 ;; loop++) // test if values in range, if not, reprint message until range is met
    {
        printf("%s (range %d to %d): ", prompt, lowerlimit, upperlimit); // reprint prompt and show range
        scanf("%d", output); // get integer from user

        if(*output >= lowerlimit && *output <= upperlimit)
        {
            break; // exit loop for error message if values are in range
        }

        if(*output < lowerlimit)
        {
            printf("*** Error: You must enter a value in the range %d to %d ***\n", lowerlimit, upperlimit);
        }

        if(*output > upperlimit)
        {
            printf("*** Error: You must enter a value in the range %d to %d ***\n", lowerlimit, upperlimit);
        }   
    } // end for loop
}


// calculate and store remainder in memory
void GetRemainder(int dividend, int divisor, int * remainder)
{
    *remainder = dividend % divisor; // calculate and change remainder pointer value       
}
