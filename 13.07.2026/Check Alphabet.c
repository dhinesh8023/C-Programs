#include <stdio.h>
#include <ctype.h>
int main()
{
   char ch;
   printf("Enter the an Alphabet:");
   scanf("%c",&ch);
   if(isalpha(ch))
    printf("It is An Alphabet");
   else
    printf("It is not Alphabet");
   return 0;
}
