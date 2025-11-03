//Write a program which accept number from user and return difference between summation of all its factors and non factors.

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
//  Function Name : FactorDiff
//  Description :   It is used to perform difference between factors and non factors      
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

int FactorDiff(int iNo)
{
    int iCnt = 0;
    int Factor = 0;
    int NonFactor = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt != iNo))
        {
            Factor += iCnt;
        }
        else
        {
            NonFactor += iCnt;
        }
    }
    return Factor - NonFactor;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorDiff(iValue);

    printf("%d",iRet);

    return 0;
}