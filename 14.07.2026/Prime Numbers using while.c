#include <stdio.h>
int main()
{
    int n, i = 1, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(i <= n)
    {
        if(n % i == 0)
        {
            count++;
        }
        i++;
    }
    if(count == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
    return 0;
}
