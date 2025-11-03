//Accept on character from users and check whether that character is vowel (a,e,i,o,u) or not.

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
#include<stdbool.h>

typedef int Bool;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description :   It is used to check the character is vowel or not      
//  Input :         char
//  Output :        char
//  Author :        Tejal Sanjay Shinde
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////

bool ChkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' ||
        cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char CValue = '\0';
    Bool bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&CValue);

    bRet = ChkVowel(CValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}