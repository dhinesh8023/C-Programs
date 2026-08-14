#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    switch (a > b && a > c)
    {
        case 1:
            printf("%d is the greatest number.", a);
            break;

        default:
            switch (b > c)
            {
                case 1:
                    printf("%d is the greatest number.", b);
                    break;

                default:
                    printf("%d is the greatest number.", c);
                    break;
            }
    break;
    }
    return 0;
}
