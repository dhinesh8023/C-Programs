#include <stdio.h>
void sum()
{
    int a,b,result;
    printf("Enter the A : ");
    scanf("%d",&a);
    printf("Enter the B : ");
    scanf("%d",&b);
    result= a + b;
    printf("Result : %d",result);
}
int main()
{
    sum();
    return 0;
}
