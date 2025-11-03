//Write a program to find the sum of digits of a number.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : sumOfDigits
//  Description :   It is used to perform sum digits  
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void sumOfDigits(int num) 
    {
        int sum = 0;
        int n = num;

        while (n != 0) 
        {
            sum += n % 10;  
            n = n / 10;     
        }

        System.out.println("Sum of digits of " + num + " = " + sum);
    }
}

class program1 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}