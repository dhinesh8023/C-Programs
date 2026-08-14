#include <stdio.h>
int main()
{
    int a[] = {10,20,30,40,50};
    int *p1 = &a[4];
    int *p2 = &a[1];
    printf("%ld", p1 - p2);
    return 0;
}
