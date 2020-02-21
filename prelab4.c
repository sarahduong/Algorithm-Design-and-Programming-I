#include<stdio.h>
#include<math.h>
void DoTest (double base, int exponent);
double MyPower(double base, int exponent);

int main(void)
{ // begin main
    int i,j;

    for(i=1; i<5; i++)
    { // begin "i" for
        for (j=0; j<5; j++)
        { // begin "j" for
            DoTest(i,j);
        } // end "j" for
    } // end "i" for
} // end main

void DoTest (double base, int exponent)
{
    double MyPowerResult;
    MyPowerResult = MyPower(base, exponent); // function for result
    int powresult = pow(base, exponent); 
    
    if(powresult != MyPowerResult)
    {
        printf("%d was expected, but %d was the result\n", powresult, MyPowerResult);
    } 
    else 
    {
    printf("Testing %lf to the %d power \n", base, exponent);
    }
}

double MyPower(double base, int exponent)
{
    int Result = base;
    int loop = 1;
    while(loop<exponent)
    {   
        Result = Result * base;
        loop++;
    }
    return Result;
}
