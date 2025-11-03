//Write a program which accetp range from user and return addition of all even numbers in between that range.(Range should contains positive numbers only)

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
//  Function Name : RangeSumEven
//  Description :   It is used to perform addition of even range   
//  Input :         Integer, Integer 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int i, sum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        return -1;  
    }
    
    if(iStart % 2 != 0)
    {
        iStart++;  
    }

    for(i = iStart; i <= iEnd; i += 2)
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

    iRet = RangeSumEven(iValue1, iValue2);  

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