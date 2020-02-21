#include<stdio.h>
#include<math.h>

void DoTest(double base, int exponent);
double MyPower(double base, int exponent);
void TestIsEqual(double result, double expected);

int main(void)
{ // begin main
    DoTest(-20,11);
    DoTest(2.0d,3);
    DoTest(2.0d,-1);
    DoTest(5.0d,-2);
    DoTest(1.0d,0);
    DoTest(4,0);
    DoTest(-1,3);
    DoTest(-2,-2);
    DoTest(-20,-1);
    DoTest(-20,-11);
    DoTest(4.5,3);
    DoTest(4.5,-3);
    DoTest(-1,11);
    DoTest(1,-11);
} // end main

void DoTest(double base, int exponent) // DoTest function
{
    double MyPowerResult;
    MyPowerResult = MyPower(base,exponent); // call MyPower and store MyPowerResult
    double powresult = pow(base, exponent); // use pow function

    printf("Testing %lf to the %d power\n", base, exponent); // print testing message
    
    TestIsEqual(MyPowerResult, powresult); // check to see if success or error
}




double MyPower(double base, int exponent) // MyPower Function; recreate pow
{
    double answer = base;
    int loop = 1;

    for(; exponent<-10 || exponent>5; loop++) // error for out of range
    {
        answer = 0;
        return answer;
    }

    if(exponent==0)
    {
        answer =1;
        return answer;
        loop++;
    }

    if(exponent>0)
    {  // loop for exponents 1 to 10
        while(loop<exponent)
        {
            answer = answer * base;
            loop++;
        }
    return answer;
    } 

    if(exponent<0)
    { // loop for exponents -10 to -1
        exponent = exponent*(-1);
        while(loop<exponent)
        {
            (answer) = answer * (base);
            loop++;
        }
    return (1/answer);
    } // end else
}




void TestIsEqual(double result, double expected)

{
    if(result == expected)
    {
        printf("\tSuccess: %lf == %lf\n", result, expected);
    }
    else
    {
        printf("\tError: expected %lf, result was %lf\n", expected, result);
    }
}
