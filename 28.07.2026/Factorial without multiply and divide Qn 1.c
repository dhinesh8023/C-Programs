#include <stdio.h>
int main()
{
int i,n,j,fact=1,result;
printf("Enter the Value:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
result=0;
for(j=0;j<i;j++)
{
result=result+fact;
}
fact=result;
}
printf("\nThe Factorial of : %d",fact);
return 0;
}
