#include <stdio.h>
int main()
{
    int T, i;
    int E[100], L[100];
    int guests = 0, max = 0;
    printf("Enter the number of hours: ");
    scanf("%d", &T);
    printf("Enter the number of guests entering:\n");
    for(i = 0; i < T; i++)
    {
        scanf("%d", &E[i]);
    }
    printf("Enter the number of guests leaving:\n");
    for(i = 0; i < T; i++)
    {
        scanf("%d", &L[i]);
    }
    for(i = 0; i < T; i++)
    {
        guests = guests + E[i] - L[i];

        if(guests > max)
        {
            max = guests;
        }
    }
    printf("Maximum number of guests = %d", max);
    return 0;
}
