//Check if number is divisible by 5

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
#include <stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : is_divisible_by_five
//  Description :   It is used to check number is divisible by 5       
//  Input :         Integer
//  Output :        string
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

bool is_divisible_by_five(int number)
{
    if(number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
}