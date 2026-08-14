#include <stdio.h>
int main()
{
    int i,j;

    for(i = 1, j = 10; i <= 5; i++, j--)
    {
        printf("%d \t%d\n", i, j);
    }
    return 0;
}
