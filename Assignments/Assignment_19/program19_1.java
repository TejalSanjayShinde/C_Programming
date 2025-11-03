//Write a program to chech whether a given year is a leap year or not.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : checkLeapYear
//  Description :   It is used to perform year is leap or not 
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////
class Logic 
{
    void checkLeapYear(int year) 
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            System.out.println(year + " is a Leap Year");
        } else 
        {
            System.out.println(year + " is not a Leap Year");
        }
    }
}

class program1 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);  
    }
}