#include <stdio.h>
void rotate(int a[], int n, int k)
{
    int i, j, temp;
    k = k % n;
    for(i = 1; i <= k; i++)
    {
        temp = a[0];
        for(j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
    }
}
int main()
{
    int a[100], n, k, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter K: ");
    scanf("%d", &k);
    rotate(a, n, k);
    printf("Array after left rotation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
