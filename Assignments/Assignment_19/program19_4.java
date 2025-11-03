// Write a program to print each digit of a number seperately.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : printDigits
//  Description :   It is used to perform number seperately of a each digit
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void printDigits(int num) 
    {
        System.out.println("Digits of " + num + " are:");
        String number = Integer.toString(num);
        for (int i = 0; i < number.length(); i++) 
        {
            System.out.println(number.charAt(i));
        }
    }
}

class program4 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.printDigits(9876);  
    }
}