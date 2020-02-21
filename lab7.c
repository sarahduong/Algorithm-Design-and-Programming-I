#include<stdio.h>

// Function Prototypes
void PromptString(char * inputstring);
void StringReplace(char * oString, char * pString, char * rString);


int main()
{
    printf("\n");
    printf("\t* * * * * * * * * * * * *\n");
    printf("\t*   Welcome to Lab 7!   *\n");
    printf("\t* * * * * * * * * * * * *\n\n");
    
    char orgString[256];
        printf("Please enter the original string: \n");
        PromptString(orgString); // call function to get original string from user
        printf("Original string = %s", orgString);
        printf("\n");
    
    char patternString[32];
        printf("Please enter the pattern string: \n");
        PromptString(patternString); // call function to get pattern string from user
        printf("Pattern string = %s", patternString);
        printf("\n");
    
    char repString[32];
        printf("Please enter the replacement: \n");
        PromptString(repString); // call function to get replacement string from user
        printf("Replacement string = %s", repString);
        printf("\n");
    
    StringReplace(orgString, patternString, repString); // call function for replacing string 

    printf("\nThe resultant string is: \"%s\" ", orgString);
    printf("\n\n");
    printf("*** Thanks for doing Lab 7 ***\n\n");
}


void PromptString(char * string)
{
    scanf("%s", string);
}


void StringReplace(char * oString, char * pString, char * rString)
{   
    char * start;
    start = rString;
    while (* oString != '\0') // loop through original string char-by-char
    {      
        // printf("\npString address before: %p\n", pString);
        // printf("rString address before: %p\n\n", rString);
        if(* pString != '\0' && *oString == *pString) // goes through only when character match is made from original and pattern
        {
            while(* rString!='\0') // loop and check for null terminator of replacement string 
            {
                * oString = * rString; // replace original string with replacement string
                oString++; // move pointer for original string one character over
                rString++; // move pointer for replacement string one character over
            }  
           rString = start; // reset rString to first position of string
           }
        printf("rString address after: %p \n", rString);
        oString++; // increments until a match is made or exit if no match
    }
}
