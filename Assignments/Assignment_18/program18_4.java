//Write a program to find the sum of even and odd digits seperately in a number.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : sumEvenDigits
//  Description :   It is used to perform number is odd or even seperately
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////
class Logic 
{
    void sumEvenOddDigits(int num) 
    {
        int evenSum = 0;
        int oddSum = 0;
        int n = num;

        while (n != 0) 
        {
            int digit = n % 10;
            if (digit % 2 == 0) 
            {
                evenSum += digit;
            } else 
            {
                oddSum += digit;
            }
            n = n / 10;
        }

        System.out.println("In number " + num + ":");
        System.out.println("Sum of even digits = " + evenSum);
        System.out.println("Sum of odd digits = " + oddSum);
    }
}

class program4 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}