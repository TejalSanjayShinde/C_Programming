//Accept number from user and check whether number is even or odd.

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
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEvenOdd
//  Description :   It is used to perform the number is even or odd  
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

bool ChkEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkEvenOdd(iValue);

    return 0;
}