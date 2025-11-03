//Write a program which accept number from user and print numbers till that number.

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
//  Description :   It is used to perform to print number      
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    for(int i = 1; i<= iNo; i++)
    {
        printf("%d\n",i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");

    scanf("%d",&iValue);

    Display (iValue);

    return 0;
}