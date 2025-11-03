//Check Even or Odd

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
//  Function Name : CheckEvenOdd
//  Description :   It is used to perform number is even or odd     
//  Input :         Integer
//  Output :        string
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    int iRem =0;

    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }
}

int main()
{
    int iNum = 0;

    printf("Enter number\n");
    scanf("%d",&iNum);

    CheckEvenOdd(iNum);

    return 0;
}