//Print all factor of a number

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
//  Function Name : PrintFactors
//  Description :   It is used to perform division        
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void PrintFactors(int number)
{
    int i;
    if(number <= 0)
    {
        printf("Invalid number\n");
        return;
    }

    printf("Factors of %d are: ", number);
    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    PrintFactors(number);

    return 0;
}