#include <stdio.h>
int main() {
    int jar = 10, k = 5, buy;
    printf("Enter the number of Candies : ");
    scanf("%d", &buy);

    if (buy > jar || jar - buy < k)
        printf("Invalid Input");
    else {
        jar -= buy;
        printf("Number of Candies Sold: %d\n", buy);
        printf("Number of candies left : %d", jar);
    }
    return 0;
}
