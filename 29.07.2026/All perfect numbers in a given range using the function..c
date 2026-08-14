#include<stdio.h>
void arm(int start , int end)
{
    int i,n,perfect;
    for(n=start;n<=end;n++)
    {
        perfect=0;
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
            perfect = perfect + i;
    }
        if(perfect==n)
            printf("\n%d is an Perfect Number\n",n);
}
}
int main()
{
    int n,start,end;
    printf("Enter the Starting Range : ");
    scanf("%d",&start);
    printf("Enter the Ending Range : ");
    scanf("%d",&end);
    arm(start,end);
}
