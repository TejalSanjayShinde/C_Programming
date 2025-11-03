//Write a program to find the sum of all even numbers up to N.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : sumEvenNumbes
//  Description :   It is used to perform sum of even numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void sumEvenNumbers(int n) 
    {
        int sum = 0;
        for (int i = 2; i <= n; i += 2) 
        {
            sum += i;
        }
        System.out.println("Sum of all even numbers up to " + n + " is: " + sum);
    }
}

class program1 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);  
    }
}