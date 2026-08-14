#include <stdio.h>
int Circular(int *a, int *b, int n)
{
int i, j, k;
for(i = 0; i < n; i++)
{
    if(*(a) == *(b + i))
    {
        for(j = 0; j < n; j++)
        {
            k = (i + j) % n;
            if(a[j] != b[k])
                break;
        }
        if(j == n)
            return 1;
    }
}
return 0;
}
int main()
{
int n, i;

printf("Enter size of array: ");
scanf("%d", &n);
int a[n], b[n];
printf("Enter first array elements:\n");
for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
printf("Enter second array elements:\n");
for(i = 0; i < n; i++)
    scanf("%d", &b[i]);
if(Circular(a, b, n))
    printf("Arrays are circular rotations.");
else
    printf("Arrays are not circular rotations.");
return 0;

}
