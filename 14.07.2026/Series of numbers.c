#include <stdio.h>
int main()
{
    int i=1,term=0,sum=0,n;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    while(i<=n){
        term = term *10+1;
    printf("%d\n",term);
    sum = sum+term;
    i++;
}
printf("Sum of series = %d",sum);
return 0;
}
