//Write a program  to display the ggrade of a student based on marks.

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Function Name : displayGrade
//  Description :   It is used to perform to dispaly grade of student 
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejal Sanjay Shinde
//  Date :          02/10/2025
//
/////////////////////////////////////////////////////////////////

class Logic 
{
    void displayGrade(int marks) 
    {
        if (marks >= 90) 
        {
            System.out.println("Grade: A+");
        } else if (marks >= 80) 
        {
            System.out.println("Grade: A");
        } else if (marks >= 70) 
        {
            System.out.println("Grade: B");
        } else if (marks >= 60) 
        {
            System.out.println("Grade: C");
        } else if (marks >= 50) 
        {
            System.out.println("Grade: D");
        } else 
        {
            System.out.println("Grade: F (Fail)");
        }
    }
}

class program2 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.displayGrade(82);  
    }
}