//Write a program which accept number from user and return the count of odd digits.

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
//  Function Name : CountOdd
//  Description :   It is used to print count of odd digits      
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          30/10/2025
//
/////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit;
    int count = 0;

    if(iNo < 0) 
    {
        iNo = -iNo;
    }

    if(iNo == 0) 
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0) 
        {
            count++;
        }
        iNo = iNo / 10;
    }

    return count;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue); 

    printf("Count of odd digits: %d\n", iRet);

    return 0;
}