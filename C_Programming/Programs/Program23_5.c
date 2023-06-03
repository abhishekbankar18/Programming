// Accept division of student from user and depends on the division 
// display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
// of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
// (Application should be case insensitive)

/*

Input : C
Output : Your exam at 9.20 AM

Input : d
Output : Your exam at 10.30 AM

*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7 AM\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10.30 AM\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}


/*

Enter your devision
c
Your exam at 9.20 AM

Enter your devision
d
Your exam at 10.30 AM

Enter your devision
A
Your exam at 7 AM

*/