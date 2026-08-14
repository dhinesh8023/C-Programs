#include <stdio.h>
void sum(int a,int b)
{
int result;
printf("Enter the A : ");
scanf("%d",&a);
printf("Enter the B : ");
scanf("%d",&b);
result= a + b;
printf("Result : %d",result);
}
int main()
{
int a,b;
sum(a,b);
}
