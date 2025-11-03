//Write a program which accept temperature in fahrenheit and convert it into celsius.(1 celsius = (fahrenheit - 32) * (5/9)).

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description :   It is used to convert fahrenheint to celsius     
//  Input :         float
//  Output :        float
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double celsius;
    celsius = (fTemp - 32) * 5.0 / 9.0; 
    return celsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue); 

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %.5lf\n", dRet); 

    return 0;
}