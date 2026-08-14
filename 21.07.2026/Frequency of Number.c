#include <stdio.h>
int main()
{
    int arr[100], n, i, j, count;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nFrequency of elements:\n");
    for(i = 0; i < n; i++)
    {
        count = 1;
        if(arr[i] == -1)
            continue;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        printf("%d occurs %d time\n", arr[i], count);
    }
    return 0;
}
