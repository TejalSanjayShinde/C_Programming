//Write a program to find the minimum of three numbers.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : findMin
//  Description :   It is used to perform number is minimum  
//  Input :         Integer,Integer,Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          01/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void findMin(int a, int b, int c) 
    {
        int min = a;

        if (b < min) 
        {
            min = b;
        }
        if (c < min) 
        {
            min = c;
        }

        System.out.println("Minimum of " + a + ", " + b + ", and " + c + " is " + min);
    }
}

class program4 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}