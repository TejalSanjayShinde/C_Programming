//Write a program to calculate the sum of first N natural numbers.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : claculateSum
//  Description :   It is used to perform sum of N natural numbers   
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////


class Logic 
{
    void calculateSum(int n) 
    {
        int sum = 0;
        for (int i = 1; i <= n; i++) 
        {
            sum += i;
        }
        System.out.println("Sum of first " + n + " natural numbers is: " + sum);
    }
}

class program1 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}