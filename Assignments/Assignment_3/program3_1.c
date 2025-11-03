//write a program which accept one number from user and print that number of even numbers on screen.

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
//  Function Name : PrintEven
//  Description :   It is used to perform the number is even      
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0; 
   // int iNum = 2;
     
    if(iNo <= 0)
    {
        return;
    }
    
    for(iCnt = 2; iCnt <= iNo; iCnt+=2)
    {
        printf("%d\n",iCnt);
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}