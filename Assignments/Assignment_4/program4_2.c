//Write a program which accept number from user and display its factors in decresing order.

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
//  Function Name : FactorReverse
//  Description :   It is used to perform factors in decresing order       
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

void FactorReverse(int iNo)
{
    int i = 0;

    for(i = iNo / 2; i >= 1; i--)
    {
        if((iNo % i)  == 0) 
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    FactorReverse(iValue);

    return 0;
}