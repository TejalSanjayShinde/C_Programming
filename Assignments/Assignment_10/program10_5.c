//Writer a program which accept area in square feet and convert it into square meter.(1 square feet= 0.0929 square )

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
//  Function Name : SquareMeter
//  Description :   It is used to convert square feet into square meter    
//  Input :         Integer
//  Output :        float
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dMeter;
    dMeter = iValue * 0.0929; 
    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue); 

    dRet = SquareMeter(iValue);

    printf("Area in square meters: %.6lf\n", dRet); 

    return 0;
}