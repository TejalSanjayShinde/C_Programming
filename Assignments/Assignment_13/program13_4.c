//Find sum of first N natural numbers.

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
//  Function Name : sum_natural_numbers
//  Description :   It is used to print sum of first N natural numbers      
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int sum_natural_numbers(int limit)
{
    int i, sum = 0;

    for(i = 1; i <= limit; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    printf("Sum of first %d natural numbers: %d\n", limit, sum_natural_numbers(limit));

    return 0;
}