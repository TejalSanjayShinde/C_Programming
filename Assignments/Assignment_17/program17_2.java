//write a program to check whether a number is a palindrome or not.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : checkPalindrome
//  Description :   It is used to perform number is palindrome or not   
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void checkPalindrome(int num) 
    {
        int original = num;
        int reverse = 0;

        while (num != 0) 
        {
            int digit = num % 10;
            reverse = reverse * 10 + digit;
            num = num / 10;
        }

        if (original == reverse) 
        {
            System.out.println(original + " is a palindrome");
        } else 
        {
            System.out.println(original + " is not a palindrome");
        }
    }
}

class program2 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
        obj.checkPalindrome(123);
    }
}