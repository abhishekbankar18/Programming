// Accept Character from user and check whether it is special 
// symbol or not (!, @, #, $, %, ^, &, *).

/*

Input : %
Output : TRUE

Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(((ch >= 35) && (ch <= 38)) || (ch == 33) || (ch == 42) || (ch == 64) || (ch == 94))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return 0;
}