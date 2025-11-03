//Accept one number from user and print that number of * on screen.

#include<stdio.h>

void AcceptNum(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* \n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    AcceptNum(iValue);
    return 0;
}