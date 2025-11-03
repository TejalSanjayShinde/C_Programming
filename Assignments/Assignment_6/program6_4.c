//write a program which accept three numbers and print its multiplication.

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
//  Function Name : NumMultiplication
//  Description :   It is used to perform multiplication       
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////

int NumMultiplication( int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    
    return iNo1 * iNo2 * iNo3;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
    printf("Please enter three numbers \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = NumMultiplication(iValue1, iValue2, iValue3);

    printf("%d", iRet);
}