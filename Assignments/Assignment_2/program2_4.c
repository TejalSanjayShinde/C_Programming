//Accept two numbers from user and display first number in second number of times.
/*
    Input:  12 5
    output: 12 12 12 12 12

    Input:  -2 3
    output: -2 -2 -2

    Input:  21 -3
    output: 21 21 21

    Input: -2 0
    output:
*/

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
//  Description :   It is used to perform first number in second number of times       
//  Input :         Integer, Integer 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    //write updater
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    printf("Enter Frequency \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}