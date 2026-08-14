#include<stdio.h>
int main()
{
    int i;
    int a[] = {10, 20, 30, 40, 50};
    int *ptr = a;
    for(i=0;i<5;i++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }
}
