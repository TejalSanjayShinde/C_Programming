//Write a program to check whether a number is positive, negative or zero.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : checkSign
//  Description :   It is used to perform number is positive,negative or zero
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////
class Logic 
{
    void checkSign(int num) 
    {
        if (num > 0) 
        {
            System.out.println(num + " is a positive number");
        } else if (num < 0) 
        {
            System.out.println(num + " is a negative number");
        } else 
        {
            System.out.println("The number is zero");
        }
    }
}

class program5 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkSign(25);
        obj.checkSign(-10);
        obj.checkSign(0);
    }
}