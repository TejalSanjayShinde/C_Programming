//Write a program to find the maximum of two numbers.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : findMax
//  Description :   It is used to perform number is maximum
//  Input :         Integer,Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void findMax(int a, int b) 
    {
        if (a > b) 
        {
            System.out.println("Maximum of " + a + " and " + b + " is " + a);
        } else if (b > a) 
        {
            System.out.println("Maximum of " + a + " and " + b + " is " + b);
        } else 
        {
            System.out.println("Both numbers are equal: " + a);
        }
    }
}

class program3 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}