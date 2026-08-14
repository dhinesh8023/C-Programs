#include <stdio.h>
int series(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int i,j,n,fact=1,sum=0;
    printf("Enter the Value : ");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        fact=series(j);
        sum = sum + (fact/j);
    }
    printf("\nSum of Series = %d\n",sum);
}


//Argument with Return type// 1!/1+2!/2+3!/3+4!/4.......+n!/n   //
