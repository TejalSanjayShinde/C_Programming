//Write a program which accept total marks and obtained marks from user and calculate percentage.

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

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   It is used to calculate percentage      
//  Input :         float,float
//  Output :        float
//  Author :        Tejal Sanjay Shinde
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////

float Percentage(float iTotal,float iObtained)
{
    float fResult = 0.0;
    if(iTotal == 0)
    {
        printf("Total marks cannot be zero.\n");
        return 0.0;
    }
    fResult = (((float)iObtained / iTotal) * 100);
    return fResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%.2f%%",fRet);

    return 0;
}