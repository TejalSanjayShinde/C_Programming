//Write a program which accept name from user and print that name.

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
//  Function Name : NumDivide
//  Description :   It is used to print the name       
//  Input :         string 
//  Output :        string
//  Author :        Tejal Sanjay Shinde
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter full name\n");
    scanf("%[^\n]",&Name);

    printf("Your name is %s",Name);
    return 0;
}