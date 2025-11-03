//Write a program to display all factor of given number.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : displayFactors
//  Description :   It is used to print factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void displayFactors(int num) 
    {
        System.out.println("Factors of " + num + " are:");
        for (int i = 1; i <= num; i++) 
        {
            if (num % i == 0) 
            {
                System.out.println(i);
            }
        }
    }
}

class program3 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.displayFactors(12);  
    }
}