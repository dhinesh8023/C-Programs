#include <stdio.h>
int main()
{
    int i,j,k,l;
    printf("Enter the Rows:");
    scanf("%d",&k);
    printf("Enter the Columns:");
    scanf("%d",&l);
    int arr1[k][k],arr2[k][l],arr3[k][l];
    printf("Enter the Arr1 Elements:");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the Arr2 Elements:");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
        for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Addition of 2 Matrix:\n",&arr3[i][j]);
        for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
 return 0;
}

