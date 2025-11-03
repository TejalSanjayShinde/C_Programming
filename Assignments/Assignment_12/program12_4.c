//Sum of even factors (excluding number itself)

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
//  Function Name : sum_of_even_factors
//  Description :   It is used to perform sum of even factor      
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int i, sum = 0;

    if(number <= 0) 
    {
        return 0;
    }

    for(i = 1; i < number; i++) 
    {
        if(number % i == 0 && i % 2 == 0) 
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of even factors : %d\n", sum_of_even_factors(number));

    return 0;
}