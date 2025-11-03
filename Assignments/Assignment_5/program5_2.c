//Find maximum of two numbers

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
//  Function Name : FindMax
//  Description :   It is used to perform maximum number       
//  Input :         Integer, Integer 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iNum1, iNum2, result;

    printf("Enter two numbers :\n");
    scanf("%d %d",&iNum1, &iNum2);

    result = FindMax(iNum1, iNum2);

    printf("Maximum is : %d\n",result);

    return 0;
}