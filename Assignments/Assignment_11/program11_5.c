//Write a program which accept range from user and display all numbers in between that range in reverse order.

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

#include <stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayRev
//  Description :   It is used to display range in reverse order     
//  Input :         Integer, Integer 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int i;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(i = iEnd; i >= iStart; i--)
    {
        printf("%d\n", i);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);  

    return 0;
}