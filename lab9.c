#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void GetFixedField(char * in, int size, FILE * fp);

int main()
{
    FILE * fp;
    fp = fopen("lab9.txt", "r");

    char studentnumberstring[12];
    int studentnumber;
    char keynumber[8];
    char lastname[11];
    char firstname[12];
    char answers[40];
    double score;
    int loop = 1;
    
    printf("\n\t* * * * * * * * * * *");
    printf("\n\t* Welcome To Lab 9! *");
    printf("\n\t* * * * * * * * * * *");
    
    if(NULL == fp)
    {
        printf("ERROR\n"); // do not do anything if file is NULL
    } // if end
    else
    {
        while(fgetc(fp) !=EOF)
        { 
            
            fseek(fp, -1L, SEEK_CUR); // move pointer back one
             
            GetFixedField(studentnumberstring, 12 ,fp);
            studentnumber = atoi(studentnumberstring);

            GetFixedField(keynumber, 8, fp);
            GetFixedField(lastname, 11, fp);  
            GetFixedField(firstname, 12, fp);
            GetFixedField(answers, 40, fp);
            
            
            if(studentnumber == 99999999)
            {
                if(loop == 1)
                {
                    printf("\n\n***New key = %s   ANSWERS 1\n", firstname);
                    printf("   %s\n", answers);
                }   
                if(loop == 5)
                {                    
                    printf("\n\n\n***New key = %s   ANSWERS 2\n", firstname);
                    printf("   %s\n", answers);
                }   
            }
            if(studentnumber != 99999999) // STUDENT INFO PRINTING
            {
                printf("%s%s : \n", firstname, lastname); 
                printf("   %s\n", answers);  
            }

            loop++;
            fgets(studentnumberstring, 255, fp);
        }
        fclose(fp); 
    } // else end
} // main end


void GetFixedField(char * in, int size, FILE * fp)
{
    int i;
    for(i = 0; i<size; i++)
    {
        in[i] = fgetc(fp);
    }
    in[i]= '\0';
}

