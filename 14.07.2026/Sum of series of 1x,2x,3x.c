#include <stdio.h>7
int main()
{
    int n, i = 1,sum=0;
    printf("Enter Value: ");
    scanf("%d", &n);
    while(i <= n)
    {
        if(i == 0)
            printf("x\n");
        else
            printf("%dx+", i);
            sum = sum +i;
                i++;
    }
    printf("\nSum of series = %d",sum);
    return 0;
}
