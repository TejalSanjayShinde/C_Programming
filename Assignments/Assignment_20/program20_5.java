//Write a program to find the smallest digit in a given number.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : findSmallestDigit
//  Description :   It is used to print smallest digit
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void findSmallestDigit(int num) 
    {
        int smallest = 9;
        int digit;

        while (num > 0) 
        {
            digit = num % 10;
            if (digit < smallest) 
            {
                smallest = digit;
            }
            num = num / 10;
        }

        System.out.println("Smallest digit is: " + smallest);
    }
}

class program5 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);  
    }
}