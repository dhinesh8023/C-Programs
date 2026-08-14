#include <stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the value:");
    scanf("%c",&ch);
    if(isalpha(ch))
        printf("It is an Alphabet");
        else
            if(isdigit(ch))
        printf("It is an Digit");
    else
        printf("It is an Special Character");
    return 0;
}
