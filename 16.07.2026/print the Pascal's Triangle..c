#include <stdio.h>
int main()
{
    int i,j,n,num;
    printf("Enter the Value:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0 ;j < n - i - 1 ; j++)
        {
            printf(" ");
        }
        num =1;
        for (j=0;j<=i;j++)
        {
            printf("%d ", num);
            num = num * ( i- j) / ( j + 1);
        }
        printf("\n");
}
return 0;
}
