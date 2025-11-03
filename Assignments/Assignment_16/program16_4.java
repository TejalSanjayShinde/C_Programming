//Write a program to reverse a number.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : reverseNumber
//  Description :   It is used to perform reverse number
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic
{
    void reverseNumber(int num)
    {
        int rev = 0;
        
        while(num != 0)
        {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }
        System.out.println("Reverse number :" + rev);
    }
}

class program4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}