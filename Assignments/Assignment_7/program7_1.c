//Write a program which accept number from user and print that number of $ & * on screen.

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
//  Function Name : Pattern
//  Description :   It is used to print pattern     
//  Input :         Integer
//  Output :        # and *
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("$ \t * \t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}