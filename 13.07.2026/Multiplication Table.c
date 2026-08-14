#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
start:
    if (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
        goto start;
    }
    return 0;
}
