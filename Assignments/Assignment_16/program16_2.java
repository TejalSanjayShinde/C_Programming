//Write a program to check whether a given number is even or odd.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to perform given number is even or odd
//  Input :         Integer
//  Output :        string
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////


class Logic
{
    void CheckEvenOdd(int num)
    {
        if(num % 2 == 0)
        {
            System.out.println(num + " is even");
        }
        else
        {
            System.out.println(num + " is Odd");
        }
    }
}

class program2
{
    public static void main(String args [])
    {
        Logic obj = new Logic();
        obj.CheckEvenOdd(7);
    }
}