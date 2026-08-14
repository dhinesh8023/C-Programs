#include <stdio.h>
int main()
{
    int i = 1, n,fact=1;
    printf("Enter the Number:");
    scanf("%d", &n);
    start:
    while (i <= n)
    {
        fact = fact * i;
        i++;
        goto start;
    }
    printf("Factorial=%d\n", fact);
    return 0;
}
