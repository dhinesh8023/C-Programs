#include <stdio.h>
int longest(int *a, int n)
{
    int i, count = 1, max = 1;
    for(i = 0; i < n-1; i++)
    {
        if(*(a+i) < *(a+i+1))
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if(count > max)
            max = count;
    }

    return max;
}
int main()
{
    int n, i;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Longest Length = %d", longest(a,n));
    return 0;
}
