#include <stdio.h>
int main()
{
int i,j,k,n,num;
printf("Enter the value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=i;k<n;k++)
{
printf(" ");
}
num = i;
for(j=1;j<=i;j++)
{
printf("%d",num);
num++;
}
num = num - 2;
for(j=1;j<i;j++)
{
printf("%d",num);
num--;
}
printf("\n");
}
return 0;
}
