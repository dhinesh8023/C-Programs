#include <stdio.h>
int main()
{
    int i,j,n,num;
    printf("Enter the value:");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
        {
        int num=1;
    for(j=1;j<=i;j++)
        {
        printf("%d",num);
        num++;
    }
    printf("\n");
    }
    return 0;
}
