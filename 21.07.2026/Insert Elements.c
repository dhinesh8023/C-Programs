#include <stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos, ele;
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter element: ");
    scanf("%d", &ele);

    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele;
    n++;
    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
