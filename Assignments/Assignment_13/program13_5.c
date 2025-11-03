//Find sum of first N even numbers.


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
//  Function Name : sum_even_numbers
//  Description :   It is used to print sum of N even numbers       
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int sum_even_numbers(int limit)
{
    int i, sum = 0;

    for(i = 1; i <= limit; i++)
    {
        sum += 2 * i;  
    }

    return sum;
}

int main(void)
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    printf("Sum of first %d even numbers: %d\n", limit, sum_even_numbers(limit));

    return 0;
}