#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter Value: ");
    scanf("%d", &n);
    while(i <= n)
    {
        if(i == 1)
            printf("1");
        else
            printf("+1/%d", i);
        i++;
    }
    return 0;
}
