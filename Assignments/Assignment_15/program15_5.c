//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

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
//  Function Name : CountDiff
//  Description :   It is used to print difference between summation of even digits and odd digits.   
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          30/10/2025
//
/////////////////////////////////////////////////////////////////


int CountDiff(int iNo)
{
    int iDigit = 0;
    int SumEven = 0, SumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            SumEven += iDigit;
        }
        else
        {
            SumOdd += iDigit;
        }
        iNo = iNo / 10;
    }
    return SumEven - SumOdd;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);
    return 0;
}