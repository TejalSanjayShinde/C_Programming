//Write a program which accept N and print first 5 multiples of N.

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
//  Function Name : MultipleDisplay
//  Description :   It is used to perform first 5 Multiples of N       
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)

{
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\n", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;

}