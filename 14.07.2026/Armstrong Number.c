#include <stdio.h>
int main()
{
    int n, dig = 0, arm = 0, rem, temp, i, x;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        dig++;
    }
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        x = 1;
        for (i = 1; i <= dig; i++)
        {
            x = x * rem;
        }
        arm = arm + x;
        temp = temp / 10;
    }
    if (arm == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is Not an Armstrong number.", n);
    return 0;
}
