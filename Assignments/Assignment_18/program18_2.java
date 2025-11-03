//Write a program to print all even numbers up to N.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : printEvenNumber
//  Description :   It is used to perform number is even up to N
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////
class Logic 
{
    void printEvenNumbers(int n) 
    {
        System.out.println("Even numbers up to " + n + ":");
        for (int i = 2; i <= n; i += 2) 
        {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}

class program2 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}