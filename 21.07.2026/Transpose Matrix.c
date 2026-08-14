#include <stdio.h>
int main()
{
    int i, j, k, l;
    int arr[10][10];
    printf("Enter the Rows: ");
    scanf("%d", &k);
    printf("Enter the Columns: ");
    scanf("%d", &l);
    printf("Enter Matrix Elements:\n");
    for(i = 0; i < k; i++)
    {
        for(j = 0; j < l; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Transpose of Matrix:\n");
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < k; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
