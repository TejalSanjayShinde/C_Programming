// write a program to print numbers from N down to 1 in reverse order.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : printReverse
//  Description :   It is used to perform numbers it into reverse order
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void printReverse(int n) 
    {
        System.out.println("Numbers from " + n + " down to 1:");
        for (int i = n; i >= 1; i--) 
        {
            System.out.println(i);
        }
    }
}

class program2 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.printReverse(10);  
    }
}