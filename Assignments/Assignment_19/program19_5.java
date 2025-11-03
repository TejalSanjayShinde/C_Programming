//Write a program to calculate the power of a number using loops.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : calculatePower
//  Description :   It is used to print power of a number
//  Input :         Integer,Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void calculatePower(int base, int exp) 
    {
        int result = 1;

        for (int i = 1; i <= exp; i++) 
        {
            result = result * base;
        }

        System.out.println(base + " raised to the power " + exp + " is: " + result);
    }
}

class program5 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);  
    }
}