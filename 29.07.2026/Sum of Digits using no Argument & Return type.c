#include <stdio.h>
int sum()
{
int a,b;
printf("Enter the A : ");
scanf("%d",&a);
printf("Enter the B : ");
scanf("%d",&b);
return a+b;
}
int main()
{
    int result;
    result=sum();
    printf("Result : %d",result);
}
