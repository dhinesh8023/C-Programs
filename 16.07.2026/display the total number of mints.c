#include <stdio.h>
int main()
{
int n, len;
int sum, current, i;
scanf("%d %d", &n, &len);
sum = n;
current = n;
for(i = 2; i <= len; i++)
{
current = sum - 1;
sum = sum + current;
}
printf("%d", sum);
return 0;
}
