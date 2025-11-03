//Check Leap year

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
//  Function Name : CheckLeapYear
//  Description :   It is used to check leap year       
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if(((year % 4) == 0 && (year % 100) != 0) || ((year % 400) == 0))
    {
        printf("%d is leap year.\n",year);
    }
    else
    {
        printf("%d is not a leap year.\n",year);
    }
}

int main()
{
    int yr;

    printf("Enter year:\n");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}