#include <stdio.h>
int main()
{
    int octal, decimal = 0, rem, base = 1;
    char hex[20];
    int i = 0,n;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n > 0)
    {
        rem = n % 10;
        decimal = decimal+(rem * base);
        base=base*8;
       n = n /10;
    }
    while(decimal > 0)
    {
        rem = decimal % 16;
        if(rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = 'A' + (rem - 10);
        i++;
        decimal = decimal/ 16;
    }
    printf("Hexadecimal: ");
    while(i > 0)
    {
        i--;
        printf("%c", hex[i]);
    }
    return 0;
}
