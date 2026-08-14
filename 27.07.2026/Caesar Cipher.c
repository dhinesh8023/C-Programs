#include <stdio.h>
int main()
{
    char p[100], c[100];
    int k, i;
    printf("Enter Plain Text: ");
    gets(p);
    printf("Enter Key: ");
    scanf("%d", &k);
    if(k < 0)
    {
        printf("Invalid Input");
        return 0;
    }
    for(i = 0; p[i] != '\0'; i++)
    {
        c[i] = p[i] + k;
    }
    c[i] = '\0';
    printf("Text: %s", c);
    return 0;
}
