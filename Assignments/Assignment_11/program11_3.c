//Write a program which accept range from user and reurn addition of all numbers in etween that range.(Range should contains numbers only)

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
//  Function Name : RangeSum
//  Description :   It is used to perform addition of range       
//  Input :         Integer, Integer 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int i, sum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        return -1;  
    }

    for(i = iStart; i <= iEnd; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);  

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}