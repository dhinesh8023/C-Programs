#include <stdio.h>
int main()
{
    int n,i,j,count=1;
    printf("Enter the Values:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i-1])
                count++;
    }printf("%d",count);
    return 0;
}
