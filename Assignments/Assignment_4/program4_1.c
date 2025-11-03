//write a program which accept number from user and display its multiplication of factors.

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
//  Function Name : MultOfFactor
//  Description :   It is used to perform multiplication of factor       
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

int MultOfFactor(int iNo)
{
    int iNum = 1;
    int i = 0;

    for(i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            iNum = iNum * i;
        }
    }
    return iNum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultOfFactor(iValue);

    printf("%d",iRet);

    return 0;
}
