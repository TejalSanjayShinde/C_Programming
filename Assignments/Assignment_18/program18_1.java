//Write a program to check whether a number is prime or not.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : checkPrime
//  Description :   It is used to perform number is prime or not  
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void checkPrime(int num) 
    {
        if (num <= 1) 
        {
            System.out.println(num + " is not a prime number");
            return;
        }

        boolean isPrime = true;

        for (int i = 2; i <= Math.sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime) 
        {
            System.out.println(num + " is a prime number");
        } else 
        {
            System.out.println(num + " is not a prime number");
        }
    }
}

class program1 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
        obj.checkPrime(12);
    }
}