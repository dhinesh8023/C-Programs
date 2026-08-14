#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i);
        sum=sum+(i*i);
    }
        printf("Sum = %d ",sum);
    return 0;
}

