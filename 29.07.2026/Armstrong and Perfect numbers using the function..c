#include<stdio.h>
void arm(int n)
{
    int rem,temp,sum=0,i,perfect=0;
    temp=n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum == n)
        printf("It is an Armstrong Number\n");
    else
        printf("It is Not an Armstrong Number\n");
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
            perfect = perfect + i;
    }
        if(perfect==n)
            printf("It is an Perfect Number\n");
        else
            printf("It is not an Perfect Number\n");
}
int main()
{
    int n;
    printf("Enter the Value to Check : ");
    scanf("%d",&n);
    arm(n);
}
