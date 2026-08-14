#include <stdio.h>
int main()
{
    int i, j, n, temp, arr[10];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Reverse Array: ");
    for(i = 0; i < n; i++)
    {
printf("%d ", arr[i]);
}
return 0;
}
