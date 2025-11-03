//Write a program to find the factorial of a number using a for loop.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : FindFactorial
//  Description :   It is used to print factor  
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////


class Logic
{
    void FindFactorial(int num)
    {
        int fact = 1;
        
        for(int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        System.out.println("Factorial of" + num + "is :" + fact);
    }
}

class program3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindFactorial(5);
    }
}