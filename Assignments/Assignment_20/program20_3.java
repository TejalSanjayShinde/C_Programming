//Write a program to check whether a number is a perfect number or not.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : checkPerfect
//  Description :   It is used to perform numbers is perfect or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          03/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void checkPerfect(int num) 
    {
        int sum = 0;

        for (int i = 1; i <= num / 2; i++) 
        {
            if (num % i == 0) 
            {
                sum += i;
            }
        }

        if (sum == num) 
        {
            System.out.println(num + " is a Perfect Number");
        } else 
        {
            System.out.println(num + " is not a Perfect Number");
        }
    }
}

class program3 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);  
    }
}