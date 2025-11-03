//Count total factor of a number

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
//  Function Name : CountFactors
//  Description :   It is used to count total factor of a number
//  Input :         Integer 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int CountFactors(int number)
{
    int i, count = 0;

    if(number <= 0)  
    {
        return 0;
    }

    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Total factors: %d\n", CountFactors(number));

    return 0;
}