//Write a program which accept radius from user and calculate its area.Consider value of PI as 3.14(Area = PI * radius * radius).

/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description :   It is used to dispaly area of circle        
//  Input :         float
//  Output :        float
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    const double PI = 3.14;
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);  

    printf("Area of circle is %.4lf\n", dRet);  

    return 0;
}