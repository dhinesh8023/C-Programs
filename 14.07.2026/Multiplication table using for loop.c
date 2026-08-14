#include <stdio.h>
int main()
{
    int n,i,limit;
    printf("Enter the value:");
    scanf("%d",&n);
    printf("Enter the Limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        printf("%d * %d = %d\n",i,n,n*i);
    }
    return 0;
}
