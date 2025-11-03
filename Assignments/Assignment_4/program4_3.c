//Write a program which accept number from user and display all its non factors.

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
//  Function Name : NonFactor
//  Description :   It is used to perform display non factors       
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

void NonFactor(int iNo)
{
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i) != 0)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    NonFactor(iValue);

    return 0;
}