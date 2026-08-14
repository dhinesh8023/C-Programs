#include <stdio.h>
int main()
{
    int arr[10], n, i, j, small, second, temp;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
          scanf("%d",&arr[i]);
        }
    small = second = 100;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
    printf("Ascending order :  ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] < small)
        {
            second = small;
            small = arr[i];
        }
        else if(arr[i] < second)
        {
            second = arr[i];
        }
    }
    printf("\nSecond smallest = %d", second);
    return 0;
}
