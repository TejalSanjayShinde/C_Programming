//Write a program which accept one number from user and check whether that number is greater than 100 or not.

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
//  Function Name : ChkGreater
//  Description :   It is used to perform number is greater than 100 o not       
//  Input :         Integer
//  Output :        string
//  Author :        Tejal Sanjay Shinde
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number \n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if (bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}