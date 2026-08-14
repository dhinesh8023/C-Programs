#include <stdio.h>
int missing(int *a, int n)
{
    int i, sum = 0, total;
    total = n * (n + 1) / 2;
    for(i = 0; i < n-1; i++)
    {
        sum = sum + *(a+i);
    }
    return total - sum;
}
int main()
{
    int n, i;
    printf("Enter N: ");
    scanf("%d",&n);
    int a[n-1];
    printf("Enter elements: ");
    for(i=0;i<n-1;i++)
        scanf("%d",(a+i));
    printf("Missing number = %d", missing(a,n));
    return 0;
}
