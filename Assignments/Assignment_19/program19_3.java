// Write a program to check whether number is divisible by 5 and 11 or not.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : checkDivisible
//  Description :   It is used to perform number is divisible by 5 or 11 
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////
class Logic 
{
    void checkDivisible(int num) 
    {
        if (num % 5 == 0 && num % 11 == 0) 
        {
            System.out.println(num + " is divisible by both 5 and 11");
        } else 
        {
            System.out.println(num + " is not divisible by both 5 and 11");
        }
    }
}

class program3 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);  
    }
}