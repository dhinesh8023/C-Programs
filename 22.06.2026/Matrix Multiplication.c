#include <stdio.h>
int main()
{
    int i,j,k1,k2,l1,l2,k,l,m;
    printf("Enter the Rows for First matrix:");
    scanf("%d",&k1);
    printf("Enter the Columns for First matrix:");
    scanf("%d",&l1);
    printf("Enter the Rows for Second matrix:");
    scanf("%d",&k2);
    printf("Enter the Columns for Second matrix:");
    scanf("%d",&l2);
    int arr1[k1][l1],arr2[k2][l2],arr3[k1][l2];
    printf("Enter the First Elements:");
    for(i=0;i<k1;i++)
    {
        for(j=0;j<l1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the Second Elements:");
    for(i=0;i<k2;i++)
    {
        for(j=0;j<l2;j++)
        {
         scanf("%d",&arr2[i][j]);
        }
    }
    printf("Matrix Multiplicaion:");
    if(l1==k2)
    {
        for(i=0;i<k1;i++)
    {
        for(j=0;j<l2;j++)
        {
            arr3[i][j]=0;
                for(m=0;m<l1;m++)
                {
                    arr3[i][j] = arr3[i][j]+arr1[i][m] *arr2[m][j];
                }
        }
    }
}
else{
    printf("Cannot Be Multiply\n");
}
printf("Multiplication of 2 Matrix:\n",&arr3[i][j]);
        for(i=0;i<k1;i++)
    {
        for(j=0;j<l2;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
 return 0;
}
