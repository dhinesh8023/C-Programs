#include <stdio.h>
int main()
{
    int n,i,x;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        x=x+2;
        printf("%d\n",x);
    }
    return 0;
}
