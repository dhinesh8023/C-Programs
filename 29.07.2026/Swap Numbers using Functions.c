#include<stdio.h>
int swap(int a,int b)
{
int c;
printf("Enter the A : ");
scanf("%d",&a);
printf("\nEnter the B : ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("\nAfter Swapping : \n");
printf("\nValue of A : %d\n",a);
printf("\nValue of B : %d\n",b);
}
int main()
{
int a,b;
swap(a,b);
}


//Argument without Return type//
