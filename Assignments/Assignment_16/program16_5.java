//Write the program to count the number of digits in a given number.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : countDigits
//  Description :   It is used to perform count number of digits   
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void countDigits(int num) 
    {
        int count = 0;
        int n = num;
        
        while (n != 0) 
        {
            count++;
            n = n / 10;
        }
        
        System.out.println("Number of digits in " + num + " = " + count);
    }
}

class program5 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}