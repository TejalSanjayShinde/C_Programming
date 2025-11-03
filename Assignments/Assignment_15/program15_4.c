//Write a program which accept number from user and return multiplication of all digits.

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
//  Function Name : MultDigits
//  Description :   It is used to print multiplication of digit    
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          30/10/2025
//
/////////////////////////////////////////////////////////////////


int MultDigits(int iNo)
{
    int iDigit = 0;
    int product = 1;

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
        product *= iDigit;
        iNo = iNo / 10;
    }
    return product;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}