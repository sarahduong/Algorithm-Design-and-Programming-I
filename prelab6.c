#include<stdio.h>
void PromptAndGetInteger(int *i);
void PromptAndGetFloat(float *f);
void PromptAndGetString(char *s); 
void PromptAndGetArray(int *a);

int main()
{
    int i;
    float f;

    printf("\t\t\t* * * * * * * * * * * *\n");
    printf("\t\t\t* Welcome to Prelab 6 *\n");
    printf("\t\t\t* * * * * * * * * * * *\n");
    
    printf("Please enter an integer and hit enter: ");
    PromptAndGetInteger(&i);
    printf("Please enter a float and hit enter: ");
    PromptAndGetFloat(&f);

    char s[11];
    printf("Please enter a string with no spaces and hit enter: ");
    PromptAndGetString(s);

    int a[11];
    printf("Please enter up to 10 positive integers, entering -1 to end: ");
    PromptAndGetArray(a);

    printf("\n********************\n");
    printf("You entered %d, %f, %s\n", i, f, s);
    //PrintArray(a);
}

void PromptAndGetInteger(int *i)
{
    scanf("%d", i);
    return;
}

void PromptAndGetFloat(float *f)
{
    scanf("%f", f); 
    return;
}

void PromptAndGetString(char *s)
{
    scanf("%s", s);
}

void PromptAndGetArray(int *a)
{         
    int i;
    for(i=0; i<=10; i++)
    {
    printf("\n\tArray Location %d: ", i);
    scanf("%d", a);
    if(*a==-1)
        break;
    }
}

//void PrintArray(
