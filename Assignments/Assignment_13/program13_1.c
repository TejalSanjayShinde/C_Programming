//Print all numbers from 1 to N

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
//  Function Name : print_numbers
//  Description :   It is used to print number 1 to N       
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void print_numbers(int limit)
{
    int i;
    for(i = 1; i <= limit; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}