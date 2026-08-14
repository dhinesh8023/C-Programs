#include <stdio.h>

int main()
{
    int n;
    int x = 0, y = 0;
    int i, distance;
    printf("Enter the Value:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        distance = i * 10;

        if(i % 4 == 1)
        {
            x = x + distance;
        }
        else if(i % 4 == 2)
        {
            y = y + distance;
        }
        else if(i % 4 == 3)
        {
            x = x - distance;
        }
        else
        {
            y = y - distance;
        }
    }

    printf("%d %d", x, y);

    return 0;
}
