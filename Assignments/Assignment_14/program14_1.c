// Write a program which accept number from user and display its digits in reverse order.

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
//  Function Name : DisplayDigit
//  Description :   It is used to print digit in reverse order       
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          30/10/2025
//
/////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit;

    if(iNo < 0) 
    {
        iNo = -iNo;
    }

    printf("Digits in reverse order: ");

    if(iNo == 0) 
    {
        printf("0");
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;       
        printf("%d ", iDigit);   
        iNo = iNo / 10;          
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}