//Write a program which accept number from user and return the count of digits in between 3 and 7

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
//  Function Name : CountRange
//  Description :   It is used to print count digits in between 3 and 7  
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          30/10/2025
//
/////////////////////////////////////////////////////////////////


int CountRange(int iNo)
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
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue); 

    printf("Count of digits between 3 and 7: %d\n", iRet);

    return 0;
}