//Write a program which accept number from user and return the count of even digits.

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
//  Function Name : CountEven
//  Description :   It is used to print return count of the even digits    
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          30/10/2025
//
/////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit;
    int count = 0;

    if(iNo < 0) 
    {
        iNo = -iNo;
    }

    if(iNo == 0) 
    {
        return 1;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0) 
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

    iRet = CountEven(iValue);

    printf("Count of even digits: %d\n", iRet);

    return 0;
}