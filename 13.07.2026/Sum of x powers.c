#include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value:");
    scanf("%d",&n);
    start:
        while(i<=n)
        {
        printf("1/1^%d\n",i);
        i++;
        goto start;
}
return 0;
}
