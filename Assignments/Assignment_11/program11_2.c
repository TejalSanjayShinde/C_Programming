//Write a program which accept range from user and display all even number in between that range. 

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
//  Function Name : RangeDisplayEven
//  Description :   It is used to display even range  
//  Input :         Integer, Integer 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int i;

    if(iStart > iEnd)  
    {
        printf("Invalid range\n");
        return;
    }

    if(iStart % 2 != 0)
    {
        iStart++;  
    }

    for(i = iStart; i <= iEnd; i += 2)
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

    RangeDisplayEven(iValue1, iValue2);  
    return 0;
}