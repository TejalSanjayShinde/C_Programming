//Write a program to count total number of factors of a given numbers.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : countFactors
//  Description :   It is used to perform count of factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void countFactors(int num) 
    {
        int count = 0;
        for (int i = 1; i <= num; i++) 
        {
            if (num % i == 0) 
            {
                count++;
            }
        }
        System.out.println("Total number of factors of " + num + " is: " + count);
    }
}

class program4 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.countFactors(20);  
    }
}