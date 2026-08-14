#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabet:");
    scanf("%c",&ch);
    if(isupper(ch))
        printf("It is an uppercase");
    else
        printf("It is an Lowercase");
    return 0;
}
