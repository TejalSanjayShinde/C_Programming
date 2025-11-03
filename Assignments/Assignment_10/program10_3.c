//Write a program which accept distace in kilometer and convert it into meter.(1 kilometer = 1000 meter).

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
//  Function Name : KMtoMeter
//  Description :   It is used to conver km to meter      
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometre: ");
    scanf("%d", &iValue);  

    iRet = KMtoMeter(iValue);  

    printf("Distance in meters is %d\n", iRet);

    return 0;  
}