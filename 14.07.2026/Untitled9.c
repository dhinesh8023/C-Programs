#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for(j = 1; j <= 2 * (n - i); j++)
        {
            printf(" ");
        }
        if(i == n)
        {
            for(j = n - 1; j >= 1; j--)
            {
                printf("%d", j);
            }
        }
        else
        {
            for(j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
