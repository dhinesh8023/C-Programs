#include <stdio.h>
int main()
{
    int i = 1, n,sum=0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    start:
    while (i <= n)
    {
        sum = sum + i;
        i++;
        goto start;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
