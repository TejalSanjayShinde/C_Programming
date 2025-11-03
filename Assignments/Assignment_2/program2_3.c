//Accept on number from user if number is less tham 10 then print "Hello" otherwise print "Demo".

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
//  Function Name : Display
//  Description :   It is used to perform if the number is less than 10 then print "Hello" otherwise print "Demo"    
//  Input :         string
//  Output :        string
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}