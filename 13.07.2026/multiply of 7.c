#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    switch(a%7)
    {
    case 0:
        printf("Multiply of 7");
        break;
    case 1:
        printf("Not multiply of 7");
        break;
    }
    return 0;
}
