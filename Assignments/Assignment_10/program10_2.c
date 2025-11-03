//Write a program which accept width and height of rectangle from user and calculate its area.(Area = Width * Height).

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
//  Function Name : RectArea
//  Description :   It is used to display area of rectangle     
//  Input :         float
//  Output :        float
//  Author :        Tejal Sanjay Shinde
//  Date :          28/10/2025
//
/////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %.3lf\n", dRet); 

    return 0;
}