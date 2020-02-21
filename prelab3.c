#include<stdio.h>
int main(void)
{

int x;

    for(x=1; x<=30; x++) 
    {   
        switch(x)
        {
            case 5:
            case 10:
            case 15:
            case 20:
            case 25:
            case 30:
            printf("%d is divisible by 5.\n",x);
            break;
      
            default:
            printf("%d is not divisible by 5.\n",x);
            break;
        } // end switch
    } // end for
} // end main
