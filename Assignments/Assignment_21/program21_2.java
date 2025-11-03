//Write a program to count how many even and odd numbers are present between 1 to N.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : countEvenOddRange
//  Description :   It is used to perform count of even or odd range
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void countEvenOddRange(int n) 
    {
        int evenCount = 0, oddCount = 0;

        for (int i = 1; i <= n; i++) 
        {
            if (i % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        System.out.println("Between 1 and " + n + ":");
        System.out.println("Even numbers: " + evenCount);
        System.out.println("Odd numbers: " + oddCount);
    }
}

class program2 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);  
    }
}