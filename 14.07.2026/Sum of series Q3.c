
/* sum of series 1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + ….. + 1/(n*n)*/




#include <stdio.h>
int main()
{
    int n, i = 1,sum=0,x;
    printf("Enter Value: ");
    scanf("%d", &n);
    while(i <= n)
    {
        if(i == 0)
            printf("x/n");
        else
            printf("1/(%d*%d)+", i, i);
            sum = sum +i;
                i++;
    }
    printf("\nSum of series = %d",sum);
    return 0;
}

