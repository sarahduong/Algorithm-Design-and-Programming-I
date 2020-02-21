#include<stdio.h>
#include<stdlib.h>
void GetNextCSVField(FILE * fPtr, char * output);

int main()
{
    char lastname[20];
    char firstname[20];
    char pawprint[20];
    char studentIDstring[20];
    char scoreString[20];
    int studentID;
    double score;
    FILE * fPtr;
    float totalscore;
    int studentcount;
    
    fPtr = fopen("prelab9.dat", "r"); // open and read ".dat" file

    if(NULL == fPtr) 
    {
        printf("error\n");
    }
    else
    {
        while(fgetc(fPtr) != EOF)
        { 
            fseek(fPtr, -1L, SEEK_CUR); // move pointer back one position to offset fgets
            GetNextCSVField(fPtr, lastname);
            GetNextCSVField(fPtr, firstname);

            GetNextCSVField(fPtr, studentIDstring);
            studentID = atoi(studentIDstring); // convert string to int

            GetNextCSVField(fPtr, pawprint);

            GetNextCSVField(fPtr, scoreString);
            score = atof(scoreString); // convert string to double float
            

            // CALCULATE NUM OF STUDENTS AND ADD TO SCORE FOR AVERAGES
            studentcount++;
            totalscore = (float)(totalscore + score); 

            printf("FirstName=%s, LastName=%s,StudentNumber=%d,Pawprint=%s,Score=%lf\n"
            ,firstname,lastname,studentID,pawprint,score); 

        } // end while   
    } // end else  
        
    // Print STUDENT COUNT and AVERAGE SCORES
    printf("\n\nCount of Students: %d\n", studentcount);
    printf("Average Score: %lf\n", (float)totalscore/studentcount);

    fclose(fPtr);

} // end main



void GetNextCSVField(FILE * fPtr, char * output)
{
    char chr = 0; // initialize to 0 to enter loop
    while (!feof(fPtr) && chr!= ',' && chr!= '\n') // only get char when within field (BETWEEN COMMAS AND NEWLINE)
    {
        chr = fgetc(fPtr); // get character from file

        if(chr!= ',' && chr!= '\n') // if char needs to be saved
        {
            *output = chr;
            output++;
        }
    }
    *output = '\0';
}
