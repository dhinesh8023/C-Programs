#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n % 2 == 1)
        printf("%d", 7 * ((n - 1) / 2));
    else
        printf("%d", 6 * ((n - 2) / 2));
    return 0;
}
