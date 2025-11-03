// Write a program to print all odd numbers up to N.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : printOddNumber
//  Description :   It is used to perform number odd upto N  
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////
class Logic 
{
    void printOddNumbers(int n) 
    {
        System.out.println("Odd numbers up to " + n + ":");
        for (int i = 1; i <= n; i += 2) 
        {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}

class program3 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}