#include <stdio.h>
void rearrange(int*a,int n)
{
    int i,j=0,temp;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
}
int main()
{
    int n,i;
    printf("Enter Size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements:");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    rearrange(a,n);
    printf("Elements after Rearranging : ");
    for(i=0;i<n;i++)
    {
     printf("%d\t",a[i]);
    }
}
