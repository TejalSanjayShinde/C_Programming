//Print all even numbers upto N

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
/////////////////////////////////////////////////////////////////s

#include <stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : print_even_numbers
//  Description :   It is used to print even number upto N   
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    int i;
    for(i = 2; i <= limit; i += 2)
    {
        printf("%d\n", i);
    }
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    print_even_numbers(limit);

    return 0;
}