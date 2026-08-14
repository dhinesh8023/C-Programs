#include <stdio.h>
int main()
{
    int i,j,n,k,l;
    printf("Enter the Rows:");
    scanf("%d",&k);
    printf("Enter the Columns:");
    scanf("%d",&l);
    printf("Enter the elements:");
    int arr[k][l];
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The 2D Array Elemens:\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
