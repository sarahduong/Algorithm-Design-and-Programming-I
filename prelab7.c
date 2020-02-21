#include<stdio.h>

void promptString( char * output)
{
    printf("Please enter a string:");
    scanf("%s", output);
    printf("\n");
}

int stringLength(char * string)
{
    char * psize; // creates pointer to use as increment
    int length = 0;
    for(psize=string; *psize!='\0'; psize++) // set psize to array string
    {
        length++;
    }
    return length;
}

void swapString(char * string)
{
    int endIdx = stringLength(string) -1; // gets length of string minus null terminator, sets at end element

    int startIdx=0; // first element (zeroeth)

    char * p = string;

    char temp = *(p + startIdx);
    *(p+ startIdx) = *(p+ endIdx);
    *(p + endIdx) = temp;
}

int main(void)
{
    char s[256];
    promptString(s);
    int length = stringLength(s);
    printf("You entered %s\n", s);
    printf("The string is %d in length:\n", length);
    swapString(s);
    printf("The switched string is %s\n", s);
}
