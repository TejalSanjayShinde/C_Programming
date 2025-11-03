//Write a program to print the multiplication table of a number.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : printTable
//  Description :   It is used to perform multiplication table  
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void printTable(int num) 
    {
        System.out.println("Multiplication Table of " + num + ":");
        for (int i = 1; i <= 10; i++) 
        {
            System.out.println(num + " x " + i + " = " + (num * i));
        }
    }
}

class program5 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}