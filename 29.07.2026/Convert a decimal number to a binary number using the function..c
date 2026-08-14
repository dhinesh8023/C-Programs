#include <stdio.h>
int binary(int n)
{
    if(n>0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}
int main()
{
    int n;
    printf("Enter the Decimal Value:");
    scanf("%d",&n);
    printf("Binary Value :\n");
    binary(n);
}
