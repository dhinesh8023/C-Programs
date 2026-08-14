#include <stdio.h>
int Duplicate(int *a, int n)
{
    int i, j, k;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(a+i) == *(a+j))
            {
                for(k = j; k < n-1; k++)
                {
                    *(a+k) = *(a+k+1);
                }
                n--;
                j--;
            }
        }
    }
    return n;
}
int main()
{
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", (a+i));
    n =Duplicate(a, n);
    printf("New array: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(a+i));
    return 0;
}
