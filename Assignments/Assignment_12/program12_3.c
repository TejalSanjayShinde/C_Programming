//Sum of all factors of a number

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
//  Function Name : SumOfFactors
//  Description :   It is used to perform sum of factor      
//  Input :         Integer 
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int SumOfFactors(int number)
{
    int i, sum = 0;

    if(number <= 0) 
    {
        return 0;
    }

    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main(void)
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of factors: %d\n", SumOfFactors(number));

    return 0;
}