//Write a program to calculate the product of digits of a number.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : productOfDigits
//  Description :   It is used to print product of digit
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void productOfDigits(int num) 
    {
        int product = 1;
        int digit;

        while (num > 0) 
        {
            digit = num % 10;
            product *= digit;
            num = num / 10;
        }

        System.out.println("Product of digits: " + product);
    }
}

class program1 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);  
    }
}