#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], arr3[20];
    int n1, n2;
    int i, j, k = 0, temp;
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("Enter first sorted array: ");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    printf("Enter second sorted array: ");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n1; i++)
    {
        arr3[k] = arr1[i];
        k++;
    }
    for(i = 0; i < n2; i++)
    {
        arr3[k] = arr2[i];
        k++;
    }
    for(i = 0; i < k-1; i++)
    {
        for(j = i+1; j < k; j++)
        {
            if(arr3[i] > arr3[j])
            {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    printf("Merged Array in Ascending Order: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
