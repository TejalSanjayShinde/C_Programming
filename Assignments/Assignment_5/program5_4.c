//Check Positive,Negative or Zero.

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
//  Function Name : CheckNumberType
//  Description :   It is used to perform number type  
//  Input :         Integer
//  Output :        string
//  Author :        Tejal Sanjay Shinde
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("The number is positive.\n");
    }
    else if(iNo < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }
}

int main()
{
    int iNum;

    printf("Enter number:\n");
    scanf("%d",&iNum);

    CheckNumberType(iNum);

    return 0;
}