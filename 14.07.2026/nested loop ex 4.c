#include <stdio.h>
int main()
{
    int n, i, j, k, l;
    printf("Enter the value: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(k=i; k < n; k++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*", j);
        for(l=i-1;l>=1;l--)
            printf("*", l);
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(k = n; k >i; k--)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*", j);
        for(l = i-1; l >= 1; l--)
            printf("*", l);
        printf("\n");
    }
    return 0;
}
