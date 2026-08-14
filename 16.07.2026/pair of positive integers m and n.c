#include <stdio.h>
int main()
{
int m, n, temp, digits = 0, i;
printf("Enter the Values:");
scanf("%d %d", &m, &n);
temp = n;
while(temp > 0)
{
digits++;
temp = temp / 10;
}
for(i = m; i <= n; i++)
{
printf("%0*d", digits, i);
if(i != n)
printf(" ");
}
return 0;
}
