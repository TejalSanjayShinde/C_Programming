//Write a program to print all numbers from 1 to N that are divisible by both 2 and 3.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : divisibleBy2and3
//  Description :   It is used to perform divisible bye 2 and 3
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic
{
    void divisibleBy2and3(int n)
    {
        System.out.println("Numbers from 1 to " + n + "divisible by 2 and 3:");
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0 && i % 3 == 0)
            {
                System.out.println(i);
            }
        }
    }
}

class program5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.divisibleBy2and3(30);
    }
}