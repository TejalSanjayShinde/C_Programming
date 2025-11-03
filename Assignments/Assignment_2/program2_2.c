//Accept one number from user and print that number * on screen.

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
//  Function Name : Display
//  Description :   It is used to print *       
//  Input :         Integer
//  Output :        *
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    //write updater
    while(iNo > iCnt)
    {
        printf("*\n");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}