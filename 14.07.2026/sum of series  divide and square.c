#include <stdio.h>7
int main()
{
    int n, i = 1;
    float sum = 0.0;
    printf("Enter the Value: ");
    scanf("%d", &n);
    while(i <= n)
    {
        sum = sum + (1.0/i);
        i++;
    }
    printf("%f",sum);
    return 0;
}
