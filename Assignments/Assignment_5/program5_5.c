//Find largest among three numbers.

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
//  Function Name : FindLargest
//  Description :   It is used to perform division        
//  Input :         Integer, Integer,Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if((x >= y) && (x >= z))
    {
        return x;
    }
    else if((y >= x) && (y >= z))
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c, result;

    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a, &b, &c);

    result = FindLargest(a, b, c);

    printf("Largest number is :%d\n",result);
    return 0;
}