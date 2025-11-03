//Write a program to find even factorial of given number.

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
//  Function Name : EveFactorial
//  Description :   It is used to even factorial 
//  Input :         Integer, 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)  
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);  

    printf("Even Factorial of number is %d\n", iRet);  

    return 0;
}