//Write a program to find the largest digit in a given nymbers.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : findLargestDigits
//  Description :   It is used to perform largest digit
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void findLargestDigit(int num) 
    {
        int largest = 0;
        int digit;

        while (num > 0) 
        {
            digit = num % 10;
            if (digit > largest) 
            {
                largest = digit;
            }
            num = num / 10;
        }

        System.out.println("Largest digit is: " + largest);
    }
}

class program4 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);  
    }
}