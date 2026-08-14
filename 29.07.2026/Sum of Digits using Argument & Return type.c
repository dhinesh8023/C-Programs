#include <stdio.h>
int sum(int a,int b)
{
printf("Enter the A : ");
scanf("%d",&a);
printf("Enter the B : ");
scanf("%d",&b);
return a+b;
}
int main()
{
    int a,b,result;
    result = sum(a,b);
    printf("Result : %d",result);
}
